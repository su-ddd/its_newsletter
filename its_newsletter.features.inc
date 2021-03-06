<?php
/**
 * @file
 * its_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function its_newsletter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function its_newsletter_node_info() {
  $items = array(
    'newsletter_article' => array(
      'name' => t('Newsletter Article'),
      'base' => 'node_content',
      'description' => t('An article to be published in the University IT Newsletter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
