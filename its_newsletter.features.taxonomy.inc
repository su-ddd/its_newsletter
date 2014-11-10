<?php
/**
 * @file
 * its_newsletter.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function its_newsletter_taxonomy_default_vocabularies() {
  return array(
    'newsletter_issue' => array(
      'name' => 'Newsletter Issue',
      'machine_name' => 'newsletter_issue',
      'description' => 'An individual newsletter issue',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
