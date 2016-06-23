<?php
/**
 * @file
 * estate_capital_content_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function estate_capital_content_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'blog_author_display' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'listing-title',
        'ft' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_short_alternative',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<p class="post-date-ago"><span>',
          'suffix' => '</span></p>',
        ),
      ),
    ),
    'field_blog_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Tags',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|glossary|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'glossary';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'key_related_block' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'other_related_block' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|glossary|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|glossary|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'glossary';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|glossary|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|company';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'company';
  $ds_fieldsetting->settings = array(
    'company_team_listing' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|company'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|contact';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'contact';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|page|contact'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|glossary_listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'glossary_listing';
  $ds_fieldsetting->settings = array(
    'glossary_listing_block' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|glossary_listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|homepage';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'homepage';
  $ds_fieldsetting->settings = array(
    'homepage_custom_downloads' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|homepage'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|portfolio_listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'portfolio_listing';
  $ds_fieldsetting->settings = array(
    'portfolio_listing_block' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'related_advisers_display' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|portfolio_listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|portfolio|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'portfolio';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'portfolio_details_block' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'twrapper tc2-6-o1-5',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_edition_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Edition ',
          'lb-el' => 'span',
          'lb-cl' => 'edition-label',
          'lb-col' => TRUE,
          'prefix' => '<p class="edition-display">',
          'suffix' => '</p>',
        ),
      ),
    ),
    'field_portfolio_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<h2 class="portfolio-title">',
          'suffix' => ' <span class="after-label">Portfolio</span></h2>',
        ),
      ),
    ),
  );
  $export['node|portfolio|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|team|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'team';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'listing-title',
        'ft' => array(),
      ),
    ),
    'field_position' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<p>',
          'suffix' => '</p>',
        ),
      ),
    ),
  );
  $export['node|team|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|team|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'team';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|team|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function estate_capital_content_types_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'blog_author_display';
  $ds_field->label = 'Blog Author Display';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'article|default';
  $ds_field->properties = array(
    'block' => 'views|blog_author_display-block',
    'block_render' => '1',
  );
  $export['blog_author_display'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'bottom_company_content';
  $ds_field->label = 'Bottom Company Content';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|company';
  $ds_field->properties = array(
    'block' => 'block|7',
    'block_render' => '1',
  );
  $export['bottom_company_content'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'company_team_listing';
  $ds_field->label = 'Company Team Listing';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|company';
  $ds_field->properties = array(
    'block' => 'views|team_listing-block',
    'block_render' => '1',
  );
  $export['company_team_listing'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'glossary_listing_block';
  $ds_field->label = 'Glossary Listing Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|glossary_listing';
  $ds_field->properties = array(
    'block' => 'views|glossary_listing-block',
    'block_render' => '3',
  );
  $export['glossary_listing_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'glossary_related_pages_block';
  $ds_field->label = 'Glossary Related Pages Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'glossary|default';
  $ds_field->properties = array(
    'block' => 'views|glossary_related_pages-block',
    'block_render' => '3',
  );
  $export['glossary_related_pages_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'homepage_custom_downloads';
  $ds_field->label = 'Homepage Custom Downloads';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|homepage';
  $ds_field->properties = array(
    'block' => 'block|9',
    'block_render' => '1',
  );
  $export['homepage_custom_downloads'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'homepage_offset_block';
  $ds_field->label = 'Homepage Offset Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|25a7f4f90a4d46e55bb16c4b17c71807',
    'block_render' => '1',
  );
  $export['homepage_offset_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'homepage_promoted_advisers';
  $ds_field->label = 'Homepage Promoted Advisers';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|homepage_related_advisers-block',
    'block_render' => '1',
  );
  $export['homepage_promoted_advisers'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'key_related_block';
  $ds_field->label = 'Key Related Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|default
glossary|default';
  $ds_field->properties = array(
    'block' => 'views|key_related_pages-block',
    'block_render' => '1',
  );
  $export['key_related_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'other_related_block';
  $ds_field->label = 'Other Related Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|default
glossary|default';
  $ds_field->properties = array(
    'block' => 'views|other_related_pages-block',
    'block_render' => '1',
  );
  $export['other_related_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'portfolio_details_block';
  $ds_field->label = 'Portfolio Details Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'portfolio|default';
  $ds_field->properties = array(
    'block' => 'views|portfolio_value_display-block',
    'block_render' => '2',
  );
  $export['portfolio_details_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'portfolio_listing_block';
  $ds_field->label = 'Portfolio Listing Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|portfolio_listing';
  $ds_field->properties = array(
    'block' => 'views|portfolio_listing-block',
    'block_render' => '1',
  );
  $export['portfolio_listing_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_advisers_display';
  $ds_field->label = 'Related Advisers Display';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|related_advisers-block',
    'block_render' => '1',
  );
  $export['related_advisers_display'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_author_adviser_';
  $ds_field->label = 'Related Author (Adviser)';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'article|default';
  $ds_field->properties = array(
    'block' => 'views|related_advisers-block_1',
    'block_render' => '3',
  );
  $export['related_author_adviser_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'test_portfolio_code_field';
  $ds_field->label = 'Test Portfolio Code Field';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'portfolio|default';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p>[node:field_risk_detail]</p>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['test_portfolio_code_field'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'test_portfolio_dynamic_field';
  $ds_field->label = 'Test Portfolio Dynamic Field';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'portfolio|default';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['test_portfolio_dynamic_field'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function estate_capital_content_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'field_body',
      ),
      'right' => array(
        3 => 'blog_author_display',
      ),
      'ds_hidden' => array(
        4 => 'field_blog_category',
        5 => 'field_blog_tags',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'post_date' => 'left',
      'field_body' => 'left',
      'blog_author_display' => 'right',
      'field_blog_category' => 'ds_hidden',
      'field_blog_tags' => 'ds_hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        'twrapper' => 'twrapper',
        'tc2-8-o1-3' => 'tc2-8-o1-3',
      ),
      'left' => array(
        '' => '',
        'tcol-1' => 'tcol-1',
      ),
      'right' => array(
        '' => '',
        'tcol-2' => 'tcol-2',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|glossary|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'glossary';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_body',
      ),
      'right' => array(
        2 => 'key_related_block',
        3 => 'other_related_block',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_body' => 'left',
      'key_related_block' => 'right',
      'other_related_block' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'twrapper' => 'twrapper',
        'tc2-6-o1-5' => 'tc2-6-o1-5',
      ),
      'left' => array(
        'tcol-1' => 'tcol-1',
      ),
      'right' => array(
        'tcol-2' => 'tcol-2',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['node|glossary|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|glossary|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'glossary';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|glossary|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|company';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'company';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_body',
        1 => 'company_team_listing',
      ),
    ),
    'fields' => array(
      'field_body' => 'ds_content',
      'company_team_listing' => 'ds_content',
    ),
  );
  $export['node|page|company'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|contact';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'contact';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_body',
      ),
      'ds_hidden' => array(
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_body' => 'ds_content',
      'title' => 'ds_hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|page|contact'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_body',
      ),
    ),
    'fields' => array(
      'field_body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'twrapper' => 'twrapper',
        'tc2-6-o1-5' => 'tc2-6-o1-5',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|glossary_listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'glossary_listing';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_body',
        1 => 'glossary_listing_block',
      ),
    ),
    'fields' => array(
      'field_body' => 'left',
      'glossary_listing_block' => 'left',
    ),
    'classes' => array(
      'layout_class' => array(
        'twrapper' => 'twrapper',
        'tc2-6-o1-5' => 'tc2-6-o1-5',
      ),
      'left' => array(
        'tcol-1' => 'tcol-1',
      ),
      'right' => array(
        'tcol-2' => 'tcol-2',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['node|page|glossary_listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|homepage';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'homepage';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_body',
      ),
      'ds_hidden' => array(
        1 => 'homepage_custom_downloads',
      ),
    ),
    'fields' => array(
      'field_body' => 'ds_content',
      'homepage_custom_downloads' => 'ds_hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        'twrapper' => 'twrapper',
        'tc2-6-o1-5' => 'tc2-6-o1-5',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|page|homepage'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|portfolio_listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'portfolio_listing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_body',
        1 => 'portfolio_listing_block',
        2 => 'related_advisers_display',
      ),
    ),
    'fields' => array(
      'field_body' => 'ds_content',
      'portfolio_listing_block' => 'ds_content',
      'related_advisers_display' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'tc2-6-o1-5' => 'tc2-6-o1-5',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|page|portfolio_listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|resource_library';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'resource_library';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_body',
      ),
    ),
    'fields' => array(
      'field_body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|page|resource_library'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|portfolio|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'portfolio';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_equal_width';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_portfolio_title',
        1 => 'field_edition_date',
      ),
      'middle' => array(
        2 => 'field_body',
      ),
      'right' => array(
        3 => 'portfolio_details_block',
      ),
    ),
    'fields' => array(
      'field_portfolio_title' => 'left',
      'field_edition_date' => 'left',
      'field_body' => 'middle',
      'portfolio_details_block' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['node|portfolio|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|portfolio|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'portfolio';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_portfolio_title',
        1 => 'field_edition_date',
        2 => 'field_body',
        3 => 'field_risk_detail',
        4 => 'field_risk',
        5 => 'field_active',
        6 => 'field_active_detail',
        7 => 'field_equity',
        8 => 'field_equity_detail',
        9 => 'field_yield',
        10 => 'field_yield_details',
        11 => 'field_image',
        12 => 'field_subtitle',
        13 => 'field_intro',
        14 => 'field_theme_colour',
        15 => 'field_main_header_image',
        16 => 'submitted_by',
      ),
    ),
    'fields' => array(
      'field_portfolio_title' => 'ds_content',
      'field_edition_date' => 'ds_content',
      'field_body' => 'ds_content',
      'field_risk_detail' => 'ds_content',
      'field_risk' => 'ds_content',
      'field_active' => 'ds_content',
      'field_active_detail' => 'ds_content',
      'field_equity' => 'ds_content',
      'field_equity_detail' => 'ds_content',
      'field_yield' => 'ds_content',
      'field_yield_details' => 'ds_content',
      'field_image' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'field_intro' => 'ds_content',
      'field_theme_colour' => 'ds_content',
      'field_main_header_image' => 'ds_content',
      'submitted_by' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|portfolio|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|team|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'team';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_position',
      ),
      'middle' => array(
        2 => 'field_image',
      ),
      'right' => array(
        3 => 'field_body',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_position' => 'left',
      'field_image' => 'middle',
      'field_body' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'twrapper' => 'twrapper',
        'tc2-4-o1-7' => 'tc2-4-o1-7',
      ),
      'left' => array(
        'nested-full' => 'nested-full',
      ),
      'middle' => array(
        'tcol-1' => 'tcol-1',
      ),
      'right' => array(
        'tcol-2' => 'tcol-2',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['node|team|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|team|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'team';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|team|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function estate_capital_content_types_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'company';
  $ds_view_mode->label = 'Company';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['company'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'contact';
  $ds_view_mode->label = 'Contact';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['contact'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'glossary_listing';
  $ds_view_mode->label = 'Glossary Listing';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['glossary_listing'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'homepage';
  $ds_view_mode->label = 'Homepage';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['homepage'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'portfolio_listing';
  $ds_view_mode->label = 'Portfolio Listing';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['portfolio_listing'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'resource_library';
  $ds_view_mode->label = 'Resource Library';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['resource_library'] = $ds_view_mode;

  return $export;
}
