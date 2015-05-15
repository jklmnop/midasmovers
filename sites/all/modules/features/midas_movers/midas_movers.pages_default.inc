<?php
/**
 * @file
 * midas_movers.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function midas_movers_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page__panel_context_4b114d95-adbe-40b0-a02b-07db50b45580';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '610031f9-95a8-4240-b5f7-671b1cd204e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-47fdab1b-3347-4e96-9e25-0f9d4d8f66d1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'nivo_slider-nivo_slider';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '47fdab1b-3347-4e96-9e25-0f9d4d8f66d1';
    $display->content['new-47fdab1b-3347-4e96-9e25-0f9d4d8f66d1'] = $pane;
    $display->panels['middle'][0] = 'new-47fdab1b-3347-4e96-9e25-0f9d4d8f66d1';
    $pane = new stdClass();
    $pane->pid = 'new-ee456508-dde7-4697-93ad-b36bf9ff91ad';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ee456508-dde7-4697-93ad-b36bf9ff91ad';
    $display->content['new-ee456508-dde7-4697-93ad-b36bf9ff91ad'] = $pane;
    $display->panels['middle'][1] = 'new-ee456508-dde7-4697-93ad-b36bf9ff91ad';
    $pane = new stdClass();
    $pane->pid = 'new-8fad25f8-4e07-41e0-a315-2e81af088515';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8fad25f8-4e07-41e0-a315-2e81af088515';
    $display->content['new-8fad25f8-4e07-41e0-a315-2e81af088515'] = $pane;
    $display->panels['middle'][2] = 'new-8fad25f8-4e07-41e0-a315-2e81af088515';
    $pane = new stdClass();
    $pane->pid = 'new-ac94379c-c864-4e45-9228-7b2c0134678c';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ac94379c-c864-4e45-9228-7b2c0134678c';
    $display->content['new-ac94379c-c864-4e45-9228-7b2c0134678c'] = $pane;
    $display->panels['middle'][3] = 'new-ac94379c-c864-4e45-9228-7b2c0134678c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
