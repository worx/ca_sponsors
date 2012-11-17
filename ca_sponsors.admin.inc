<?php

/**
 * @file
 * CA_Sponsors admin system, which overrides the default feature settings.
 *
 * Will allow us to make visual changes to the feature without overriding the
 * actual feature.
 */

/**
 * Defines the menu for overriding sponsors feature settings.
 *
 * @return
 *   Fully formed Form API array.
 */
function ca_sponsors_settings_form() {
  $form = array();

  $form['ca_sponsors_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => variable_get('ca_sponsors_panel_title', 'Sponsors'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_sponsors_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_sponsors_menu_title', 'Sponsors'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_sponsors_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Sponsors per page'),
    '#default_value' => variable_get('ca_sponsors_list_count', 5),
    '#required' => TRUE,
    '#description' => t('How many sponsorss would you like displayed per page?'),
  );
  $form['ca_sponsors_block_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Sponsors in the block'),
    '#default_value' => variable_get('ca_sponsors_block_count', 1),
    '#required' => TRUE,
    '#description' => t('How many sponsorss would you like displayed in the block?'),
  );
  $form['ca_sponsors_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Sponsor\'s list template'),
    '#options' => array(
      'ca_sponsors_list_template_one' => t('Template one'),
      'ca_sponsors_list_template_two' => t('Template two'),
      'ca_sponsors_list_template_three' => t('Template three'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_sponsors_list_template', 'ca_sponsors_list_template_one'),
  );
  $form['ca_sponsors_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Sponsor\'s node template'),
    '#options' => array(
      'ca_sponsors_node_template_one' => t('Template one'),
      'ca_sponsors_node_template_two' => t('Template two'),
      'ca_sponsors_node_template_three' => t('Template three'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_sponsors_node_template', 'ca_sponsors_node_template_one'),
  );
  $form['actions'] = array(
    '#type' => 'actions',
  );
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  // We are adding the system_settings_form_submit manually instead of
  // returning system_settings_form($form) in our return statement.
  // This allows for us to add our submit handler after the
  // system_settings_form_submit. hook_form_alter could not handle this for us.
  $form['#submit'][] = 'system_settings_form_submit';
  $form['#submit'][] = 'ca_sponsors_settings_form_submit';

  return $form;
}

/**
 * Handles form submission data from 'ca_sponsors_settings_form'.
 *
 * Determines if we should rebuild the menu router based on form data.
 */
function ca_sponsors_settings_form_submit($form, &$form_state) {
  $old_title = $form['ca_sponsors_menu_title']['#default_value'];
  $new_title = $form_state['values']['ca_sponsors_menu_title'];
  if ($old_title != $new_title) {
    menu_rebuild();
  }
}
