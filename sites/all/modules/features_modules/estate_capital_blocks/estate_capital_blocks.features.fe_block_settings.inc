<?php
/**
 * @file
 * estate_capital_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function estate_capital_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-118da6dfbee30d861dc368daea7bed2e'] = array(
    'cache' => -1,
    'css_class' => 'clearfix',
    'custom' => 0,
    'delta' => '118da6dfbee30d861dc368daea7bed2e',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/11',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'estatecapital' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'estatecapital',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-60b21f3bedbbb5e2f4ec05afd283678f'] = array(
    'cache' => -1,
    'css_class' => 'clearfix',
    'custom' => 0,
    'delta' => '60b21f3bedbbb5e2f4ec05afd283678f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/11',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'estatecapital' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'estatecapital',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-homepage_blog_listing-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'homepage_blog_listing-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'estatecapital' => array(
        'region' => 'content_middle',
        'status' => 1,
        'theme' => 'estatecapital',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-homepage_blog_listing-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'homepage_blog_listing-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'estatecapital' => array(
        'region' => 'content_middle',
        'status' => 1,
        'theme' => 'estatecapital',
        'weight' => -30,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['webform-client-block-106'] = array(
    'cache' => -1,
    'css_class' => 'clearfix',
    'custom' => 0,
    'delta' => 'client-block-106',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'node/67',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'estatecapital' => array(
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'estatecapital',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Send us your enquiry',
    'visibility' => 1,
  );

  $export['webform-client-block-6'] = array(
    'cache' => -1,
    'css_class' => 'clearfix',
    'custom' => 0,
    'delta' => 'client-block-6',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'node/67
node/104',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'estatecapital' => array(
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'estatecapital',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
