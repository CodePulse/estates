<?php
/**
 * @file
 * estate_capital_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function estate_capital_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_header_display_offset';
  $view->description = 'Displays the homepage related items 3-5 in style of key related sidebar blocks';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Header Display Offset';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'tc3-listing-4-4-4';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tcol';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_main_header_image_target_id']['id'] = 'field_main_header_image_target_id';
  $handler->display->display_options['relationships']['field_main_header_image_target_id']['table'] = 'field_data_field_main_header_image';
  $handler->display->display_options['relationships']['field_main_header_image_target_id']['field'] = 'field_main_header_image_target_id';
  $handler->display->display_options['relationships']['field_main_header_image_target_id']['label'] = 'Header Image';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'header taxonomy colour';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'header_colours' => 'header_colours',
    'blog_categories' => 0,
    'blog_tags' => 0,
    'resources_library' => 0,
    'tags' => 0,
  );
  /* Field: Taxonomy term: Class Name */
  $handler->display->display_options['fields']['field_class_name']['id'] = 'field_class_name';
  $handler->display->display_options['fields']['field_class_name']['table'] = 'field_data_field_class_name';
  $handler->display->display_options['fields']['field_class_name']['field'] = 'field_class_name';
  $handler->display->display_options['fields']['field_class_name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_class_name']['label'] = '';
  $handler->display->display_options['fields']['field_class_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_name']['type'] = 'text_plain';
  /* Field: Content: Theme Colour */
  $handler->display->display_options['fields']['field_theme_colour']['id'] = 'field_theme_colour';
  $handler->display->display_options['fields']['field_theme_colour']['table'] = 'field_data_field_theme_colour';
  $handler->display->display_options['fields']['field_theme_colour']['field'] = 'field_theme_colour';
  $handler->display->display_options['fields']['field_theme_colour']['label'] = '';
  $handler->display->display_options['fields']['field_theme_colour']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme_colour']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_colour']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_key_related_pages_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="related-title"><a href="[path]" class="db nb">[title]</a></h2> ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Key Message */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['relationship'] = 'field_key_related_pages_target_id';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<p class="subtitle"><em>[field_subtitle]</em></p>';
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = TRUE;
  /* Field: Title Text Only */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_key_related_pages_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Title Text Only';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title_1']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['title_1']['alter']['link_class'] = 'btn';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['relationship'] = 'field_main_header_image_target_id';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => 'thumbnail_retina',
    'image_link' => '',
  );
  /* Field: Display Content */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Display Content';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]
[field_subtitle]
[title_1]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'pad-content-box theme-[field_class_name]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'sort_homepage_header_display:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['homepage_header_display_offset'] = $view;

  $view = new view();
  $view->name = 'key_related_pages';
  $view->description = 'Displays the key related linked pages for this page on the theme colour bg (if set)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Key Related Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-homepage-header-display-offset tc3-listing-4-4-4';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tcol';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_key_related_pages_target_id']['id'] = 'field_key_related_pages_target_id';
  $handler->display->display_options['relationships']['field_key_related_pages_target_id']['table'] = 'field_data_field_key_related_pages';
  $handler->display->display_options['relationships']['field_key_related_pages_target_id']['field'] = 'field_key_related_pages_target_id';
  $handler->display->display_options['relationships']['field_key_related_pages_target_id']['label'] = 'Key Referenced Page';
  $handler->display->display_options['relationships']['field_key_related_pages_target_id']['required'] = TRUE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'header taxonomy colour';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'header_colours' => 'header_colours',
    'blog_categories' => 0,
    'blog_tags' => 0,
    'resources_library' => 0,
    'tags' => 0,
  );
  /* Field: Taxonomy term: Class Name */
  $handler->display->display_options['fields']['field_class_name']['id'] = 'field_class_name';
  $handler->display->display_options['fields']['field_class_name']['table'] = 'field_data_field_class_name';
  $handler->display->display_options['fields']['field_class_name']['field'] = 'field_class_name';
  $handler->display->display_options['fields']['field_class_name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_class_name']['label'] = '';
  $handler->display->display_options['fields']['field_class_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_name']['element_label_colon'] = FALSE;
  /* Field: Content: Theme Colour */
  $handler->display->display_options['fields']['field_theme_colour']['id'] = 'field_theme_colour';
  $handler->display->display_options['fields']['field_theme_colour']['table'] = 'field_data_field_theme_colour';
  $handler->display->display_options['fields']['field_theme_colour']['field'] = 'field_theme_colour';
  $handler->display->display_options['fields']['field_theme_colour']['relationship'] = 'field_key_related_pages_target_id';
  $handler->display->display_options['fields']['field_theme_colour']['label'] = '';
  $handler->display->display_options['fields']['field_theme_colour']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme_colour']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_colour']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_key_related_pages_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_key_related_pages_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="related-title"><a href="[path]" class="db nb">[title]</a></h2> ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Key Message */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['relationship'] = 'field_key_related_pages_target_id';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<p class="subtitle"><em>[field_subtitle]</em></p>';
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = TRUE;
  /* Field: Title Text Only */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_key_related_pages_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Title Text Only';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title_1']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['title_1']['alter']['link_class'] = 'btn';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Display Content */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Display Content';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]
[field_subtitle]
[title_1]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'pad-content-box theme-[field_theme_colour]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['enabled'] = FALSE;
  $export['key_related_pages'] = $view;

  return $export;
}
