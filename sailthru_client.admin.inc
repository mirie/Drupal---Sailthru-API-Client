<?php

/**
 * @file
 * Form builder; Displays Sailthru API administration settings page.
 *
 * @see system_settings_form()
 */
function sailthru_client_admin_settings() {
  $form = array();

  $form['sailthru_client_api_key'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Sailthru API key'),
    '#description'   => t('The API key provided by Sailthru'),
    '#required'      => TRUE,
    '#size'          => 32,
    '#maxlength'     => 255,
    '#default_value' => variable_get('sailthru_client_api_key', ''),
  );

  $form['sailthru_client_api_secret'] = array(
    '#type'        => 'textfield',
    '#title'       => t('Sailthru Secret'),
    '#description' => t('The secret provided by Sailthru'),
    '#required'    => TRUE,
    '#size'        => 32,
    '#maxlength'   => 255,
    '#default_value' => variable_get('sailthru_client_api_secret', ''),
  );

  $form['sailthru_client_api_uri'] = array(
    '#type'        => 'textfield',
    '#title'       => t('Sailthru URI'),
    '#description' => t('The URI to use for the Sailthru API'),
    '#required'    => TRUE,
    '#size'        => 32,
    '#maxlength'   => 255,
    '#default_value' => variable_get('sailthru_client_api_uri', 'https://api.sailthru.com'),
  );

  return system_settings_form($form);
}

