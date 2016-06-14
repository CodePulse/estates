<?php


function estatecapital_html_head_alter(&$head_elements) {
  foreach ($head_elements as $key => $element) {
    if (!empty($element['#attributes'])) {
      if (array_key_exists('href', $element['#attributes'])) {
        if (strpos($element['#attributes']['href'], 'misc/favicon.ico') > 0) {
          unset($head_elements[$key]);
        }
      }
    }
  }
}

function estatecapital_preprocess_html(&$variables, $hook) {
	
	$node = menu_get_object();

	if(isset($node) && isset($node->field_theme_colour) && count($node->field_theme_colour) != 0 && $node->field_theme_colour['und'][0]['tid'] !== ''){
		$target_id = $node->field_theme_colour['und'][0]['tid'];
		$loaded_term =taxonomy_term_load($target_id);
		if($loaded_term && !drupal_is_front_page()){
			$variables['classes_array'][] = "theme-".strtolower(drupal_clean_css_identifier($loaded_term->name));
		}	
	}
}


function estatecapital_preprocess_page(&$variables, $hook) {

	$exempt_nodes = array('67','104');
	if(!empty($variables['node']) && isset($variables['node'])){

		if(isset($variables['node']->field_main_header_image['und'][0]['target_id']) && $variables['node']->field_main_header_image['und'][0]['target_id'] != ''){
			$variables['header_type'] = 'image';
		}else if(isset($variables['node']->field_theme_colour) && !empty($variables['node']->field_theme_colour)){
			$variables['header_type'] = 'image-not-set';
		}else{
			$variables['header_type'] = 'bar';		
		}
	}else if(!empty($variables['node']) && $variables['node']->type == 'page' && !in_array($variables['node']->nid, $exempt_nodes)){
		$variables['header_type'] = 'image-not-set';
	}else{
		$variables['header_type'] = 'bar';	
	}
	

}

function estatecapital_textarea($variables) {
  $element = $variables['element'];
  $element['#attributes']['name'] = $element['#name'];
  $element['#attributes']['id'] = $element['#id'];
  $element['#attributes']['cols'] = $element['#cols'];
  $element['#attributes']['rows'] = $element['#rows'];
  _form_set_class($element, array('form-textarea'));
 
  $wrapper_attributes = array(
    'class' => array('form-textarea-wrapper'),
  );
 	
  // Add resizable behavior.
  if (!empty($element['#resizable'])) {
    $wrapper_attributes['class'][] = 'resizable';
  }

  $output = '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';

  return $output;
}

function estatecapital_preprocess_field(&$variables, $hook){

	if($variables['element']['#bundle'] == 'article' && $variables['element']['#field_name'] == 'post_date'){
		$date_value = strtotime($variables['element']['#items'][0]['value']);
    
    $display_category = '';
    
		$variables['items'][0]['#markup'] =  t('<i class="fa fa-clock-o">&nbsp;</i> %time ago'.$display_category, array('%time' => format_interval(time() -$date_value, 1)));
	}
}

function estatecapital_preprocess_views_view_fields(&$vars){
	$view = $vars['view'];

	if($vars['view']->name == 'blog_listing' || $vars['view']->name == 'homepage_blog_listing'){

    	$display_category = '';
		
		$date_value = $vars['row']->node_created;
		if(isset($date_value) && !empty($date_value)){
			$vars['fields']['title']->content .=  t('<p><i class="fa fa-clock-o">&nbsp;</i> %time ago</p>'.$display_category, array('%time' => format_interval(time() -$date_value, 1)));
		}
	}
	
	if($vars['view']->name == 'homepage_header_display' || $vars['view']->name == 'homepage_header_sticky_display'){
		$row_nid = $vars['row']->nid;
		$row_title = $vars['row']->node_title;
		
			if($vars['view']->name == 'homepage_header_sticky_display'){
				$vars['fields']['field_intro']->content = l(t($row_title), 'node/'.$row_nid, array('attributes' => array('class' => array('btn')), 'fragment' => 'content'));
				l(t('Refresh'), '', array('attributes' => array('id' => 'refresh-link-id', 'class' => 'refresh-link'), 'fragment' => 'refresh'));
			}else{
				$vars['fields']['field_intro']->content = l(t($row_title), 'node/'.$row_nid, array('attributes' => array('class' => array('btn'))));
			}
	}

	if ($view->name == 'homepage_slider') {
		$taxonomy_term_name = $vars['row']->field_field_theme_colour[0]['raw']['taxonomy_term']->name;
		$subtitle = $vars['row']->field_field_subtitle[0]['raw']['value'];
		$header_image = file_create_url($vars['row']->field_field_main_header_image[0]['raw']['entity']->field_header_image[LANGUAGE_NONE][0]['uri']);
		$header_image_alt = $vars['row']->field_field_main_header_image[0]['raw']['entity']->field_header_image[LANGUAGE_NONE][0]['alt'];

		$vars['fields']['theme'] = "theme-" . drupal_html_class($taxonomy_term_name);
		$vars['fields']['subtitle'] = $subtitle;
		$vars['fields']['header_image'] = $header_image;
		$vars['fields']['header_image_alt'] = $header_image_alt;
	}
}

function estatecapital_views_pre_render(&$view) {
	$results = $view->result;
	if ($view->name == 'homepage_slider') {
		foreach ($results as $id => $row) {
			$term_name = $row->field_field_theme_colour[0]['raw']['taxonomy_term']->name;
			$html_class_term = drupal_html_class($term_name);
			$view->result[$id]->field_field_theme_colour[0]['rendered'] = array(
				'#markup' => $html_class_term,
			);
			$r = '';
		}

	}
}

function estatecapital_preprocess_views_view_unformatted(&$vars) {

	if($vars['view']->name == 'homepage_header_display' || $vars['view']->name == 'homepage_header_sticky_display' || $vars['view']->name == 'key_related_pages'){
		
		foreach($vars['view']->result as $row_id => $row){
			
			if(isset($row->field_field_theme_colour[0]['raw']['tid'])){
				$theme_colour_taxonomy_tid = $row->field_field_theme_colour[0]['raw']['tid'];
				$term_name = $row->field_field_theme_colour[0]['raw']['taxonomy_term']->name;

				$class_output = ' theme-'.strtolower(drupal_clean_css_identifier($term_name));
				$vars['classes_array'][$row_id] .= $class_output;
			}
		}
	}
	
	
}
