<?php

function form_fun_states_form($form) {
  $form = [];

  $form['name'] = [
    '#type' => 'textfield',
    '#title' => t('My name'),
  ];

  // Demonstrate the use of the new #states FAPI property. When a user clicks
  // the status checkbox display an additional set of fields.
  $form['status'] = [
    '#type' => 'checkbox',
    '#title' => t('I have a partner in crime'),
  ];

  // The 'Container' element type is handy for controlling multiple elements'
  // states at once.
  $form['partner'] = [
    '#type' => 'container',
    '#states' => [
      'visible' => [
        ':input[name="status"]' => ['checked' => TRUE],
      ],
    ],
  ];

  $form['partner']['name'] = [
    '#type' => 'textfield',
    '#title' => t('My partner\'s name'),
  ];

  $form['partner']['modus_operandi'] = [
    '#type' => 'select',
    '#title' => t('My partner\'s M.O.'),
    '#options' => [
      1 => t('Lock picking'),
      2 => t('Barbed repartee'),
      3 => t('Super-villainy'),
      4 => t('Novelty modules'),
    ],
  ];

  return $form;
}
