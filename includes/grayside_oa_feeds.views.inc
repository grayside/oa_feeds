<?php

/**
 * Implementation of hook_views_handlers().
 */
function grayside_oa_feeds_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'grayside_oa_feeds') .'/includes',
    ),
    'handlers' => array(
      'grayside_oa_feeds_handler_field_activity_path' => array(
        'parent' => 'atrium_handler_field_activity',
      ),
      'grayside_oa_feeds_handler_field_activity_user' => array(
        'parent' => 'atrium_handler_field_activity',
      ),
    ),
  );
}

/**
 * Implementation of hook_views_data().
 */
function grayside_oa_feeds_views_data() {
  $data = array();
  $data['comments']['atrium_activity_path'] = array(
    'real field' => 'cid',
    'title' => t('Activity path'),
    'help' => t("Path for poor man's activity field."),
    'field' => array('handler' => 'grayside_oa_feeds_handler_field_activity_path'),
  );
  $data['comments']['atrium_activity_user'] = array(
    'real field' => 'cid',
    'title' => t('Activity user'),
    'help' => t("User for poor man's activity field."),
    'field' => array('handler' => 'grayside_oa_feeds_handler_field_activity_user'),
  );
  return $data;
}