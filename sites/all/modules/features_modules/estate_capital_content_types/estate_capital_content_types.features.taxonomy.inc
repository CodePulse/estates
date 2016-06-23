<?php
/**
 * @file
 * estate_capital_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function estate_capital_content_types_taxonomy_default_vocabularies() {
  return array(
    'header_colours' => array(
      'name' => 'Header Colours',
      'machine_name' => 'header_colours',
      'description' => 'List of potential colours that can be used for header backgrounds',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
