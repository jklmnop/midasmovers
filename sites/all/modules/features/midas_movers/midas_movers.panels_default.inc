<?php
/**
 * @file
 * midas_movers.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function midas_movers_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'services';
  $mini->category = 'midasmovers';
  $mini->admin_title = 'Services';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'three-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '26d87d6e-d242-4e85-8c06-e7d82656dc2c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc8feab2-b99e-40b0-86c7-af46dc428901';
    $pane->panel = 'left';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc8feab2-b99e-40b0-86c7-af46dc428901';
    $display->content['new-dc8feab2-b99e-40b0-86c7-af46dc428901'] = $pane;
    $display->panels['left'][0] = 'new-dc8feab2-b99e-40b0-86c7-af46dc428901';
    $pane = new stdClass();
    $pane->pid = 'new-e1960235-c717-4610-84f1-e7985935565b';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e1960235-c717-4610-84f1-e7985935565b';
    $display->content['new-e1960235-c717-4610-84f1-e7985935565b'] = $pane;
    $display->panels['middle'][0] = 'new-e1960235-c717-4610-84f1-e7985935565b';
    $pane = new stdClass();
    $pane->pid = 'new-76a520c9-6639-4db4-8d17-3cf3ca084444';
    $pane->panel = 'right';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '76a520c9-6639-4db4-8d17-3cf3ca084444';
    $display->content['new-76a520c9-6639-4db4-8d17-3cf3ca084444'] = $pane;
    $display->panels['right'][0] = 'new-76a520c9-6639-4db4-8d17-3cf3ca084444';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dc8feab2-b99e-40b0-86c7-af46dc428901';
  $mini->display = $display;
  $export['services'] = $mini;

  return $export;
}
