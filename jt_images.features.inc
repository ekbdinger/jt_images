<?php
/**
 * @file
 * jt_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jt_images_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function jt_images_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function jt_images_node_info() {
  $items = array(
    'image' => array(
      'name' => t('Image'),
      'base' => 'node_content',
      'description' => t('Test to add images to the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
