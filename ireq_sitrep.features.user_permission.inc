<?php
/**
 * @file
 * ireq_sitrep.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ireq_sitrep_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ireq_sitrep content'.
  $permissions['create ireq_sitrep content'] = array(
    'name' => 'create ireq_sitrep content',
    'roles' => array(
      'IREQ_user' => 'IREQ_user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ireq_sitrep content'.
  $permissions['delete any ireq_sitrep content'] = array(
    'name' => 'delete any ireq_sitrep content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ireq_sitrep content'.
  $permissions['delete own ireq_sitrep content'] = array(
    'name' => 'delete own ireq_sitrep content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ireq_sitrep content'.
  $permissions['edit any ireq_sitrep content'] = array(
    'name' => 'edit any ireq_sitrep content',
    'roles' => array(
      'IREQ_manager' => 'IREQ_manager',
      'IREQ_user' => 'IREQ_user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ireq_sitrep content'.
  $permissions['edit own ireq_sitrep content'] = array(
    'name' => 'edit own ireq_sitrep content',
    'roles' => array(
      'IREQ_user' => 'IREQ_user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'moderate ireq_sitrep state from draft to needs_review'.
  $permissions['moderate ireq_sitrep state from draft to needs_review'] = array(
    'name' => 'moderate ireq_sitrep state from draft to needs_review',
    'roles' => array(
      'IREQ_user' => 'IREQ_user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ireq_sitrep state from draft to published'.
  $permissions['moderate ireq_sitrep state from draft to published'] = array(
    'name' => 'moderate ireq_sitrep state from draft to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ireq_sitrep state from needs_review to draft'.
  $permissions['moderate ireq_sitrep state from needs_review to draft'] = array(
    'name' => 'moderate ireq_sitrep state from needs_review to draft',
    'roles' => array(
      'IREQ_manager' => 'IREQ_manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ireq_sitrep state from needs_review to published'.
  $permissions['moderate ireq_sitrep state from needs_review to published'] = array(
    'name' => 'moderate ireq_sitrep state from needs_review to published',
    'roles' => array(
      'IREQ_manager' => 'IREQ_manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view any unpublished ireq_sitrep content'.
  $permissions['view any unpublished ireq_sitrep content'] = array(
    'name' => 'view any unpublished ireq_sitrep content',
    'roles' => array(
      'IREQ_user' => 'IREQ_user',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
