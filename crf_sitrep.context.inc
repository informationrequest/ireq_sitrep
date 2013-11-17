<?php
/**
 * @file
 * crf_sitrep.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crf_sitrep_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crf_type_sitrep';
  $context->description = 'CRF - Situation Report';
  $context->tag = 'CRF';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'crf_sitrep' => 'crf_sitrep',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CRF');
  t('CRF - Situation Report');
  $export['crf_type_sitrep'] = $context;

  return $export;
}
