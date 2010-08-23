<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _grayside_oa_feeds_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _grayside_oa_feeds_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tokenauth_length';
  $strongarm->value = '23';

  $export['tokenauth_length'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tokenauth_pages';
  $strongarm->value = 'dashboard/feed
';

  $export['tokenauth_pages'] = $strongarm;
  return $export;
}
