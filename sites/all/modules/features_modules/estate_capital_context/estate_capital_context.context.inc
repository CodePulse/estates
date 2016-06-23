<?php
/**
 * @file
 * estate_capital_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function estate_capital_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'basic_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-related_advisers-block' => array(
          'module' => 'views',
          'delta' => 'related_advisers-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-key_related_pages-block' => array(
          'module' => 'views',
          'delta' => 'key_related_pages-block',
          'region' => 'content_middle',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['basic_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-25a7f4f90a4d46e55bb16c4b17c71807' => array(
          'module' => 'views',
          'delta' => '25a7f4f90a4d46e55bb16c4b17c71807',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'webform-client-block-6' => array(
          'module' => 'webform',
          'delta' => 'client-block-6',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage'] = $context;

  return $export;
}
