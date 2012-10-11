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
  $strongarm->name = 'print_display_comment_hr_sitrep';
  $strongarm->value = 0;
  $export['print_display_comment_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_hr_sitrep';
  $strongarm->value = 1;
  $export['print_display_hr_sitrep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_hr_sitrep';
  $strongarm->value = 1;
  $export['print_display_urllist_hr_sitrep'] = $strongarm;

  return $export;
}
