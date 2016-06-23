<?php
/**
 * @file
 * estate_capital_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function estate_capital_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
