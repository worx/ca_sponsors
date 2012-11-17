<?php

/**
 * @file
 * Plugin to provide access control based upon ca_sponsors admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Sponsor: list type'),
  'description' => t('Control access by sponsors list type.'),
  'callback' => 'ca_sponsors_list_template_access_check',
  'settings form' => 'ca_sponsors_list_template_access_settings',
  'settings form submit' => 'ca_sponsors_list_template_access_settings_submit',
  'summary' => 'ca_sponsors_list_template_access_summary',
);

/**
 * Settings form for the 'by sponsors list type' access plugin.
 */
function ca_sponsors_list_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_sponsors_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Sponsor\'s list template'),
    '#options' => array(
      'ca_sponsors_list_template_one' => t('Template one'),
      'ca_sponsors_list_template_two' => t('Template two'),
      'ca_sponsors_list_template_three' => t('Template three'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_sponsors_list_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_sponsors_list_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_sponsors_list_template_access_check($conf, $context) {
  return $conf['ca_sponsors_list_template'] == variable_get('ca_sponsors_list_template', 'ca_sponsors_list_template_one');
}

/**
 * Provide a summary description based upon the checked sponsors list type.
 */
function ca_sponsors_list_template_access_summary($conf, $context) {
  if ($conf['ca_sponsors_list_template'] == 'ca_sponsors_list_template_one') {
    $template = t('Template one');
  }
  elseif ($conf['ca_sponsors_list_template'] == 'ca_sponsors_list_template_two') {
    $template = t('Template two');
  }
  else {
    $template = t('Template three');
  }

  return t('Display template is set to: ' . $template);
}
