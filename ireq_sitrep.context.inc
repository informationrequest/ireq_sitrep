<?php
/**
 * @file
 * ireq_sitrep.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ireq_sitrep_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ireq_type_sitrep';
  $context->description = 'IREQ - Situation Report';
  $context->tag = 'IREQ';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ireq_sitrep' => 'ireq_sitrep',
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
  t('IREQ');
  t('IREQ - Situation Report');
  $export['ireq_type_sitrep'] = $context;

  return $export;
}
