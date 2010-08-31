
<?php

class grayside_oa_feeds_handler_field_activity_id extends atrium_activity_handler_field_activity {

  function option_definition() {
    $options = parent::option_definition();
    $options['absolute'] = array('default' => FALSE);
    return $options;
  }

  /**
   * Add the time_horizon element.
   */
  function options_form(&$form, $form_state) {
    parent::options_form($form, $form_state);
    unset($form['time_horizon']);
  }

  /**
   * Contructor. Add additional fields.
   */
  function construct() {
    parent::construct();
    $this->additional_fields['node_revision'] = array('table' => 'node_revisions', 'field' => 'vid');
    $this->additional_fields['comment_cid'] = array('table' => 'comments', 'field' => 'cid');
  }

  /**
   * Render this field as a link to group space.
   */
  function render($value) {
    // Has comments
    if (!empty($value->{$this->field_alias})) {
      return $value->{$this->aliases['nid']} . ':' . $value->{$this->aliases['comment_cid']};
    }
    // No comments
    return $value->{$this->aliases['nid']} . ':' . $value->{$this->aliases['node_revision']};
  }
}