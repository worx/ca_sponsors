<?php
/**
 * @file
 * ca_sponsors.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_sponsors_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_sponsors_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Sponsors: Node View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-sponsor-node ca-sponsor-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_sponsor' => 'ca_sponsor',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'region_right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '50.1070229821097',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'region_right' => array(
        'type' => 'region',
        'title' => 'Region Right',
        'width' => '49.8929770178903',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'region_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b9a69f35-54bf-4cac-b300-2c6c0f97c651';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cfa0260b-5d59-40ef-8938-4f4d6b3ab399';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_node_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cfa0260b-5d59-40ef-8938-4f4d6b3ab399';
    $display->content['new-cfa0260b-5d59-40ef-8938-4f4d6b3ab399'] = $pane;
    $display->panels['center'][0] = 'new-cfa0260b-5d59-40ef-8938-4f4d6b3ab399';
    $pane = new stdClass();
    $pane->pid = 'new-b7966e31-ed04-4b78-9177-7ccb7538c358';
    $pane->panel = 'region_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_contact_details';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b7966e31-ed04-4b78-9177-7ccb7538c358';
    $display->content['new-b7966e31-ed04-4b78-9177-7ccb7538c358'] = $pane;
    $display->panels['region_right'][0] = 'new-b7966e31-ed04-4b78-9177-7ccb7538c358';
    $pane = new stdClass();
    $pane->pid = 'new-0d0fdabb-1925-43ea-8ab3-56f058402be5';
    $pane->panel = 'region_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0d0fdabb-1925-43ea-8ab3-56f058402be5';
    $display->content['new-0d0fdabb-1925-43ea-8ab3-56f058402be5'] = $pane;
    $display->panels['region_right'][1] = 'new-0d0fdabb-1925-43ea-8ab3-56f058402be5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_sponsors_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_d5c61207-8ffe-4f55-a292-b859e4e3b27e';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Sponsors: Node View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-sponsor-node ca-sponsor-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_sponsor' => 'ca_sponsor',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'region_right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '50.1070229821097',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'region_right' => array(
        'type' => 'region',
        'title' => 'Region Right',
        'width' => '49.8929770178903',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'region_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b9a69f35-54bf-4cac-b300-2c6c0f97c651';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cfa0260b-5d59-40ef-8938-4f4d6b3ab399';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_node_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cfa0260b-5d59-40ef-8938-4f4d6b3ab399';
    $display->content['new-cfa0260b-5d59-40ef-8938-4f4d6b3ab399'] = $pane;
    $display->panels['first-first'][0] = 'new-cfa0260b-5d59-40ef-8938-4f4d6b3ab399';
    $pane = new stdClass();
    $pane->pid = 'new-b7966e31-ed04-4b78-9177-7ccb7538c358';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_contact_details';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b7966e31-ed04-4b78-9177-7ccb7538c358';
    $display->content['new-b7966e31-ed04-4b78-9177-7ccb7538c358'] = $pane;
    $display->panels['first-first'][1] = 'new-b7966e31-ed04-4b78-9177-7ccb7538c358';
    $pane = new stdClass();
    $pane->pid = 'new-0d0fdabb-1925-43ea-8ab3-56f058402be5';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0d0fdabb-1925-43ea-8ab3-56f058402be5';
    $display->content['new-0d0fdabb-1925-43ea-8ab3-56f058402be5'] = $pane;
    $display->panels['first-first'][2] = 'new-0d0fdabb-1925-43ea-8ab3-56f058402be5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_d5c61207-8ffe-4f55-a292-b859e4e3b27e'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_sponsors_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_sponsors_add_new_sponsor';
  $page->task = 'page';
  $page->admin_title = 'CA Sponsors: Add New Sponsor';
  $page->admin_description = '';
  $page->path = 'sponsors/add';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5868810,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Sponsor',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sponsors_add_new_sponsor_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_sponsors_add_new_sponsor';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_sponsor',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sponsors_add_new_sponsor__aurora_sponsors_add_new_sponsor';
  $handler->task = 'page';
  $handler->subtask = 'ca_sponsors_add_new_sponsor';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Sponsors: Add New Sponsor',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora_sponsors_add_new_sponsor',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd43790b7-6a80-44f7-b66d-fb02e9189b8e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6b192019-ae94-420d-acc6-6e9efcce1661';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'ca_sponsor',
      'context_admin_use_node_edit' => 0,
      'context' => 'empty',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6b192019-ae94-420d-acc6-6e9efcce1661';
    $display->content['new-6b192019-ae94-420d-acc6-6e9efcce1661'] = $pane;
    $display->panels['first-first'][0] = 'new-6b192019-ae94-420d-acc6-6e9efcce1661';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6b192019-ae94-420d-acc6-6e9efcce1661';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_sponsors_add_new_sponsor'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_sponsors_administer';
  $page->task = 'page';
  $page->admin_title = 'CA Sponsors: Administer';
  $page->admin_description = '';
  $page->path = 'sponsors/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5868810,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '20',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sponsors_administer_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_sponsors_administer';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Sponsors: Administer',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-sponsor-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sponsors';
  $display->uuid = '25c3d999-bfad-430f-93c6-09c1a901b66b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e7610bcd-961f-4a4a-9717-72e959f4be43';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7610bcd-961f-4a4a-9717-72e959f4be43';
    $display->content['new-e7610bcd-961f-4a4a-9717-72e959f4be43'] = $pane;
    $display->panels['middle'][0] = 'new-e7610bcd-961f-4a4a-9717-72e959f4be43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sponsors_administer__panel_context_0fe87a7c-6272-4c38-897f-ef4e48eb12f4';
  $handler->task = 'page';
  $handler->subtask = 'ca_sponsors_administer';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Sponsors: Administer',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-sponsor-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sponsors';
  $display->uuid = '25c3d999-bfad-430f-93c6-09c1a901b66b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e7610bcd-961f-4a4a-9717-72e959f4be43';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7610bcd-961f-4a4a-9717-72e959f4be43';
    $display->content['new-e7610bcd-961f-4a4a-9717-72e959f4be43'] = $pane;
    $display->panels['first-first'][0] = 'new-e7610bcd-961f-4a4a-9717-72e959f4be43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_sponsors_administer'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_sponsors_archive';
  $page->task = 'page';
  $page->admin_title = 'CA Sponsors: Archive';
  $page->admin_description = '';
  $page->path = 'sponsors/archive';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Archive',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sponsors_archive_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_sponsors_archive';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Sponsors: Archive',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-sponsor-list ca-sponsor-arhive-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sponsors Archive';
  $display->uuid = '1eb3039c-1cef-4b42-b53b-8e949b546822';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-34a8848e-a6ff-48e4-ba1d-4ee2f8b22559';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_archive_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '34a8848e-a6ff-48e4-ba1d-4ee2f8b22559';
    $display->content['new-34a8848e-a6ff-48e4-ba1d-4ee2f8b22559'] = $pane;
    $display->panels['middle'][0] = 'new-34a8848e-a6ff-48e4-ba1d-4ee2f8b22559';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-34a8848e-a6ff-48e4-ba1d-4ee2f8b22559';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sponsors_archive__panel_context_f358f27d-7d1a-44e1-9a20-046bb504f28b';
  $handler->task = 'page';
  $handler->subtask = 'ca_sponsors_archive';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Sponsors: Archive',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-sponsor-list ca-sponsor-arhive-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sponsors Archive';
  $display->uuid = '1eb3039c-1cef-4b42-b53b-8e949b546822';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-34a8848e-a6ff-48e4-ba1d-4ee2f8b22559';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_archive_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '34a8848e-a6ff-48e4-ba1d-4ee2f8b22559';
    $display->content['new-34a8848e-a6ff-48e4-ba1d-4ee2f8b22559'] = $pane;
    $display->panels['first-first'][0] = 'new-34a8848e-a6ff-48e4-ba1d-4ee2f8b22559';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-34a8848e-a6ff-48e4-ba1d-4ee2f8b22559';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_sponsors_archive'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_sponsors_list_view';
  $page->task = 'page';
  $page->admin_title = 'CA Sponsors: List View';
  $page->admin_description = '';
  $page->path = 'sponsors/view';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Sponsors',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sponsors_list_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_sponsors_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Sponsors: List View',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-sponsor-list ca-sponsor-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '35985c09-b807-453a-b26c-aff5637e1dc3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6de1f54f-b0cc-4073-9aa5-8b56e795f4ca';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6de1f54f-b0cc-4073-9aa5-8b56e795f4ca';
    $display->content['new-6de1f54f-b0cc-4073-9aa5-8b56e795f4ca'] = $pane;
    $display->panels['middle'][0] = 'new-6de1f54f-b0cc-4073-9aa5-8b56e795f4ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6de1f54f-b0cc-4073-9aa5-8b56e795f4ca';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sponsors_list_view__panel_context_2d42c17c-9baa-401b-bb56-e4ce341aa5ae';
  $handler->task = 'page';
  $handler->subtask = 'ca_sponsors_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Sponsors: List View',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-sponsor-list ca-sponsor-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '35985c09-b807-453a-b26c-aff5637e1dc3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6de1f54f-b0cc-4073-9aa5-8b56e795f4ca';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_sponsors-ca_sponsors_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6de1f54f-b0cc-4073-9aa5-8b56e795f4ca';
    $display->content['new-6de1f54f-b0cc-4073-9aa5-8b56e795f4ca'] = $pane;
    $display->panels['first-first'][0] = 'new-6de1f54f-b0cc-4073-9aa5-8b56e795f4ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6de1f54f-b0cc-4073-9aa5-8b56e795f4ca';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_sponsors_list_view'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_sponsors_user_add_new';
  $page->task = 'page';
  $page->admin_title = 'CA Sponsors: User Add New';
  $page->admin_description = '';
  $page->path = 'sponsors/add_new';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 149358723,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => 'global $user;

$result = db_select(\'node\', \'n\')
  ->fields(\'n\', array(\'nid\'))
  ->condition(\'uid\', $user->uid, \'=\')
  ->condition(\'type\', \'ca_sponsor\', \'=\')
  ->execute()
  ->fetchAssoc();

if (isset($result[\'nid\'])) {
  return FALSE;
}

return TRUE;',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add New Sponsor',
    'name' => 'navigation',
    'weight' => '21',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sponsors_user_add_new_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_sponsors_user_add_new';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_sponsor',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sponsors_user_add_new__panel_context_e3bb30e9-de4d-4cf5-9f11-6e1c1c749946';
  $handler->task = 'page';
  $handler->subtask = 'ca_sponsors_user_add_new';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Sponsors: User Add New',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '72c356d8-0281-494a-aa31-06958be34c66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4bdc868c-11bb-461d-9244-bc7c693a86a5';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:user_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'user_create_menu',
      'context_admin_user_roles' => array(
        149358723 => '149358723',
        2 => 0,
        3 => 0,
        4 => 0,
        13007701 => 0,
        5868810 => 0,
      ),
      'context_admin_user_roles_alter' => 'limited',
      'context_admin_user_roles_limited' => array(
        5868810 => '5868810',
        149358723 => '149358723',
        2 => 0,
        3 => 0,
        4 => 0,
        13007701 => 0,
      ),
      'context_admin_user_status' => '1',
      'context_admin_user_status_alter' => 0,
      'context_admin_user_notify' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4bdc868c-11bb-461d-9244-bc7c693a86a5';
    $display->content['new-4bdc868c-11bb-461d-9244-bc7c693a86a5'] = $pane;
    $display->panels['first-first'][0] = 'new-4bdc868c-11bb-461d-9244-bc7c693a86a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4bdc868c-11bb-461d-9244-bc7c693a86a5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_sponsors_user_add_new'] = $page;

  return $pages;

}
