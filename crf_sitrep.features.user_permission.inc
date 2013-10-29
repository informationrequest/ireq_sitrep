<?php
/**
 * @file
 * crf_sitrep.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_sitrep_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create crf_sitrep content'.
  $permissions['create crf_sitrep content'] = array(
    'name' => 'create crf_sitrep content',
    'roles' => array(
      'CRF_user' => 'CRF_user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any crf_sitrep content'.
  $permissions['delete any crf_sitrep content'] = array(
    'name' => 'delete any crf_sitrep content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own crf_sitrep content'.
  $permissions['delete own crf_sitrep content'] = array(
    'name' => 'delete own crf_sitrep content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any crf_sitrep content'.
  $permissions['edit any crf_sitrep content'] = array(
    'name' => 'edit any crf_sitrep content',
    'roles' => array(
      'CRF_manager' => 'CRF_manager',
      'CRF_user' => 'CRF_user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own crf_sitrep content'.
  $permissions['edit own crf_sitrep content'] = array(
    'name' => 'edit own crf_sitrep content',
    'roles' => array(
      'CRF_user' => 'CRF_user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'moderate crf_sitrep state from draft to needs_review'.
  $permissions['moderate crf_sitrep state from draft to needs_review'] = array(
    'name' => 'moderate crf_sitrep state from draft to needs_review',
    'roles' => array(
      'CRF_user' => 'CRF_user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate crf_sitrep state from draft to published'.
  $permissions['moderate crf_sitrep state from draft to published'] = array(
    'name' => 'moderate crf_sitrep state from draft to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate crf_sitrep state from needs_review to draft'.
  $permissions['moderate crf_sitrep state from needs_review to draft'] = array(
    'name' => 'moderate crf_sitrep state from needs_review to draft',
    'roles' => array(
      'CRF_manager' => 'CRF_manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate crf_sitrep state from needs_review to published'.
  $permissions['moderate crf_sitrep state from needs_review to published'] = array(
    'name' => 'moderate crf_sitrep state from needs_review to published',
    'roles' => array(
      'CRF_manager' => 'CRF_manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view any unpublished crf_sitrep content'.
  $permissions['view any unpublished crf_sitrep content'] = array(
    'name' => 'view any unpublished crf_sitrep content',
    'roles' => array(
      'CRF_user' => 'CRF_user',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
