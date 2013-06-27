<?php
/**
 * @file
 * crf_sitrep.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crf_sitrep_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_crf_sitrep';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_crf_sitrep';
  $strongarm->value = 0;
  $export['autosave_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_crf_sitrep';
  $strongarm->value = 0;
  $export['comment_anonymous_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_crf_sitrep';
  $strongarm->value = '0';
  $export['comment_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_crf_sitrep';
  $strongarm->value = 0;
  $export['comment_default_mode_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_crf_sitrep';
  $strongarm->value = '50';
  $export['comment_default_per_page_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_crf_sitrep';
  $strongarm->value = 0;
  $export['comment_form_location_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_crf_sitrep';
  $strongarm->value = '0';
  $export['comment_preview_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_crf_sitrep';
  $strongarm->value = 0;
  $export['comment_subject_field_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_crf_sitrep';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_crf_sitrep';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_crf_sitrep';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_crf_sitrep';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_crf_sitrep';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_crf_sitrep';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__crf_sitrep';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_crf_sitrep';
  $strongarm->value = '0';
  $export['language_content_type_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_crf_sitrep';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_crf_sitrep';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_crf_sitrep';
  $strongarm->value = array(
    0 => 'promote',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_crf_sitrep';
  $strongarm->value = '1';
  $export['node_preview_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_crf_sitrep';
  $strongarm->value = 0;
  $export['node_submitted_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_comment_crf_sitrep';
  $strongarm->value = 0;
  $export['print_display_comment_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_crf_sitrep';
  $strongarm->value = 1;
  $export['print_display_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_crf_sitrep';
  $strongarm->value = 1;
  $export['print_display_urllist_crf_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_crf_sitrep';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_crf_sitrep'] = $strongarm;

  return $export;
}
