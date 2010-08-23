<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function grayside_oa_feeds_ctools_plugin_api() {
  module_load_include('inc', 'grayside_oa_feeds', 'grayside_oa_feeds.defaults');
  $args = func_get_args();
  return call_user_func_array('_grayside_oa_feeds_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function grayside_oa_feeds_strongarm() {
  module_load_include('inc', 'grayside_oa_feeds', 'grayside_oa_feeds.defaults');
  $args = func_get_args();
  return call_user_func_array('_grayside_oa_feeds_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function grayside_oa_feeds_views_default_views() {
  module_load_include('inc', 'grayside_oa_feeds', 'grayside_oa_feeds.features.views');
  $args = func_get_args();
  return call_user_func_array('_grayside_oa_feeds_views_default_views', $args);
}
