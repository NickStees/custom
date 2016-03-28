<?php

function form_fun_tree($form_state) {
  $form = [];

  $form['#tree'] = TRUE; //keep nested form data and don't flatten

  $form['home'] = [
      '#type' => 'fieldset',
      '#title' => t('Home Address'),
  ];

  $form['home']['street'] = [
    '#type' => 'textfield',
    '#title' => t('Street address'),
  ];

  $form['home']['city'] = [
    '#type' => 'textfield',
    '#title' => t('City'),
  ];

  $form['work'] = [
      '#type' => 'fieldset',
      '#title' => t('Work Address'),
  ];

  $form['work']['street'] = [
    '#type' => 'textfield',
    '#title' => t('Street address'),
  ];

  $form['work']['city'] = [
    '#type' => 'textfield',
    '#title' => t('City'),
  ];

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Submit'),
  ];

  return $form;
}

function form_fun_tree_submit(&$form, &$form_state) {
  dsm($form_state);
}
