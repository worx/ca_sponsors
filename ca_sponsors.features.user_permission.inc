<?php
/**
 * @file
 * ca_sponsors.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_sponsors_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ca_sponsor content'.
  $permissions['create ca_sponsor content'] = array(
    'name' => 'create ca_sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
      'sponsors admin' => 'sponsors admin',
      'sponsors user' => 'sponsors user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ca_sponsor content'.
  $permissions['delete any ca_sponsor content'] = array(
    'name' => 'delete any ca_sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
      'sponsors admin' => 'sponsors admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ca_sponsor content'.
  $permissions['delete own ca_sponsor content'] = array(
    'name' => 'delete own ca_sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
      'sponsors admin' => 'sponsors admin',
      'sponsors user' => 'sponsors user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ca_sponsor content'.
  $permissions['edit any ca_sponsor content'] = array(
    'name' => 'edit any ca_sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
      'sponsors admin' => 'sponsors admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ca_sponsor content'.
  $permissions['edit own ca_sponsor content'] = array(
    'name' => 'edit own ca_sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
      'sponsors admin' => 'sponsors admin',
      'sponsors user' => 'sponsors user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
