<?php
/**
 * @file
 * its_newsletter.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function its_newsletter_user_default_roles() {
  $roles = array();

  // Exported role: Newsletter Article Editor.
  $roles['Newsletter Article Editor'] = array(
    'name' => 'Newsletter Article Editor',
    'weight' => 125,
  );

  return $roles;
}
