<?php
/**
 * @file
 * jt_images.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jt_images_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'jt_pictures';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'jt_pictures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'J&T Pictures';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_test_image']['id'] = 'field_test_image';
  $handler->display->display_options['fields']['field_test_image']['table'] = 'field_data_field_test_image';
  $handler->display->display_options['fields']['field_test_image']['field'] = 'field_test_image';
  $handler->display->display_options['fields']['field_test_image']['label'] = '';
  $handler->display->display_options['fields']['field_test_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_test_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_test_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_test_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_test_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_test_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_test_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_test_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_test_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_test_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_test_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_test_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_test_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_test_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_test_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_test_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_test_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_test_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_test_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_test_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_test_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pictures';
  $export['jt_pictures'] = $view;

  return $export;
}
