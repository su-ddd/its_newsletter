<?php
/**
 * @file
 * its_newsletter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function its_newsletter_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create newsletter_article content'.
  $permissions['create newsletter_article content'] = array(
    'name' => 'create newsletter_article content',
    'roles' => array(
      'Newsletter Article Editor' => 'Newsletter Article Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any newsletter_article content'.
  $permissions['delete any newsletter_article content'] = array(
    'name' => 'delete any newsletter_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own newsletter_article content'.
  $permissions['delete own newsletter_article content'] = array(
    'name' => 'delete own newsletter_article content',
    'roles' => array(
      'Newsletter Article Editor' => 'Newsletter Article Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any newsletter_article content'.
  $permissions['edit any newsletter_article content'] = array(
    'name' => 'edit any newsletter_article content',
    'roles' => array(
      'Newsletter Article Editor' => 'Newsletter Article Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own newsletter_article content'.
  $permissions['edit own newsletter_article content'] = array(
    'name' => 'edit own newsletter_article content',
    'roles' => array(
      'Newsletter Article Editor' => 'Newsletter Article Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished newsletter_article content'.
  $permissions['view any unpublished newsletter_article content'] = array(
    'name' => 'view any unpublished newsletter_article content',
    'roles' => array(
      'Newsletter Article Editor' => 'Newsletter Article Editor',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
