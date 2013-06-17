<?php
/**
 * @file
 * ca_sponsors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_sponsors_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ca_sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_sponsors_image']['id'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['table'] = 'field_data_field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_offset'] = '0';
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_ca_sponsors_about']['id'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['table'] = 'field_data_field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['settings'] = array(
    'trim_length' => '700',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_sponsor' => 'ca_sponsor',
  );

  /* Display: CA Sponsors: List Template One */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: List Template One', 'ca_sponsors_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_sponsors_image']['id'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['table'] = 'field_data_field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_offset'] = '0';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['id'] = 'field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['field'] = 'field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_ca_sponsors_about']['id'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['table'] = 'field_data_field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_sponsor' => 'ca_sponsor',
  );
  /* Filter criterion: Content: Dates -  start date (field_ca_sponsors_dates) */
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['id'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['field'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dates - end date (field_ca_sponsors_dates:value2) */
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['id'] = 'field_ca_sponsors_dates_value2';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['field'] = 'field_ca_sponsors_dates_value2';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Dates';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value' => 'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value',
    'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value2' => 'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value2',
  );
  $handler->display->display_options['pane_title'] = 'CA Sponsors: List Template One';

  /* Display: CA Sponsors: Node Template One */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: Node Template One', 'ca_sponsors_node_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_sponsors_image']['id'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['table'] = 'field_data_field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['settings'] = array(
    'colorbox_node_style' => 'default',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_offset'] = '0';
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_ca_sponsors_about']['id'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['table'] = 'field_data_field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['label'] = 'About Us';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['settings'] = array(
    'trim_length' => '700',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Sponsors: Node Template One';

  /* Display: CA Sponsors: Gallery */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: Gallery', 'ca_sponsors_gallery');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['id'] = 'field_ca_sponsors_image_gallery';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['table'] = 'field_data_field_ca_sponsors_image_gallery';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['field'] = 'field_ca_sponsors_image_gallery';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['settings'] = array(
    'colorbox_node_style' => 'default',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Sponsors: Gallery';

  /* Display: CA Sponsors: Administer */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: Administer', 'ca_sponsors_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ca_sponsors_image' => 'field_ca_sponsors_image',
    'field_ca_sponsors_about' => 'field_ca_sponsors_about',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_sponsors_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_sponsors_about' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Dates -  start date (field_ca_sponsors_dates) */
  $handler->display->display_options['sorts']['field_ca_sponsors_dates_value']['id'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['sorts']['field_ca_sponsors_dates_value']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['sorts']['field_ca_sponsors_dates_value']['field'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_sponsor' => 'ca_sponsor',
  );
  $handler->display->display_options['pane_title'] = 'CA Sponsors: Administer';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Sponsors: Archive Template One */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: Archive Template One', 'ca_sponsors_archive_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_sponsors_image']['id'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['table'] = 'field_data_field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_offset'] = '0';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['id'] = 'field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['field'] = 'field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_ca_sponsors_about']['id'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['table'] = 'field_data_field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_sponsor' => 'ca_sponsor',
  );
  /* Filter criterion: Content: Dates -  start date (field_ca_sponsors_dates) */
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['id'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['field'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dates - end date (field_ca_sponsors_dates:value2) */
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['id'] = 'field_ca_sponsors_dates_value2';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['field'] = 'field_ca_sponsors_dates_value2';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Dates';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-5:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value' => 'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value',
    'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value2' => 'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value2',
  );
  $handler->display->display_options['pane_title'] = 'CA Sponsors: Archive Template One';

  /* Display: CA Sponsors: Contact Details */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: Contact Details', 'ca_sponsors_contact_details');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_ca_sponsors_email']['id'] = 'field_ca_sponsors_email';
  $handler->display->display_options['fields']['field_ca_sponsors_email']['table'] = 'field_data_field_ca_sponsors_email';
  $handler->display->display_options['fields']['field_ca_sponsors_email']['field'] = 'field_ca_sponsors_email';
  $handler->display->display_options['fields']['field_ca_sponsors_email']['label'] = 'Contact Us';
  $handler->display->display_options['fields']['field_ca_sponsors_email']['type'] = 'email_contact';
  /* Field: Content: Website Address */
  $handler->display->display_options['fields']['field_ca_sponsors_website']['id'] = 'field_ca_sponsors_website';
  $handler->display->display_options['fields']['field_ca_sponsors_website']['table'] = 'field_data_field_ca_sponsors_website';
  $handler->display->display_options['fields']['field_ca_sponsors_website']['field'] = 'field_ca_sponsors_website';
  $handler->display->display_options['fields']['field_ca_sponsors_website']['label'] = 'Website';
  $handler->display->display_options['fields']['field_ca_sponsors_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ca_sponsors_website']['alter']['text'] = '<a href="[field_ca_sponsors_website]">Homepage</a>';
  /* Field: Content: Contact Info */
  $handler->display->display_options['fields']['field_ca_sponsors_contact']['id'] = 'field_ca_sponsors_contact';
  $handler->display->display_options['fields']['field_ca_sponsors_contact']['table'] = 'field_data_field_ca_sponsors_contact';
  $handler->display->display_options['fields']['field_ca_sponsors_contact']['field'] = 'field_ca_sponsors_contact';
  $handler->display->display_options['pane_title'] = 'CA Sponsors: Contact Details';
  $export['ca_sponsors'] = $view;

  return $export;
}
