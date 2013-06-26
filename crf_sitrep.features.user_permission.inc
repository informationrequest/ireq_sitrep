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

  // Exported permission: create crf_sitrep content.
  $permissions['create crf_sitrep content'] = array(
    'name' => 'create crf_sitrep content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any crf_sitrep content.
  $permissions['delete any crf_sitrep content'] = array(
    'name' => 'delete any crf_sitrep content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own crf_sitrep content.
  $permissions['delete own crf_sitrep content'] = array(
    'name' => 'delete own crf_sitrep content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any crf_sitrep content.
  $permissions['edit any crf_sitrep content'] = array(
    'name' => 'edit any crf_sitrep content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own crf_sitrep content.
  $permissions['edit own crf_sitrep content'] = array(
    'name' => 'edit own crf_sitrep content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: view any unpublished crf_sitrep content.
  $permissions['view any unpublished crf_sitrep content'] = array(
    'name' => 'view any unpublished crf_sitrep content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
