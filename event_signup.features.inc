<?php
/**
 * @file
 * event_signup.features.inc
 */

/**
 * Implements hook_node_info().
 */
function event_signup_node_info() {
  $items = array(
    'event_signup' => array(
      'name' => t('Tilmelding'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
