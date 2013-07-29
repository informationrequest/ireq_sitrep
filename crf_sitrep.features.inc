<?php
/**
 * @file
 * crf_sitrep.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_sitrep_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crf_sitrep_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function crf_sitrep_node_info() {
  $items = array(
    'crf_sitrep' => array(
      'name' => t('Situation Report Information'),
      'base' => 'node_content',
      'description' => t('CRF Situation Report Information'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
