<?php
/**
 * @file
 * ireq_sitrep.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ireq_sitrep_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ireq_sitrep_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ireq_sitrep_node_info() {
  $items = array(
    'ireq_sitrep' => array(
      'name' => t('Situation Report Information'),
      'base' => 'node_content',
      'description' => t('Situation Report Information'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
