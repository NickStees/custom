<?php

function form_fun_cake_page(){
  return drupal_get_form('form_fun_cake'); //unique id of form
}

function form_fun_cake($form_state){
  $form = [];
  $form['choice'] = [
      '#type' => 'select',
      '#title' => t('Cake or pie?'),
      '#description' => t('would you like cake or pie?'),
      '#options' => [
        'cake' => t('Cake Please'),
        'pie' => t('Pie I guess..'),
      ],
      '#default_value' => 'cake',
      '#required' => TRUE,
  ];

  $form['buttons']['submit'] = [
    '#type' => 'submit',
    '#value' => t('Submit'),
  ];

  $form['buttons']['unsure'] = [
    '#type' => 'submit',
    '#value' => t('Not Sure'),
    '#submit' => ['form_fun_cake_unsure'],
    '#validate' => [],
  ];

  return $form;
}

//useing referances to arrays with &
function form_fun_cake_validate(&$form, &$form_state){
  if($form_state['values']['choice'] == 'cake'){
    form_set_error('choice', t('We are out of cake.'));
  }
}

//useing referances to arrays with &
function form_fun_cake_submit(&$form, &$form_state){
  dsm($form_state['values']);
  $form_state['redirect'] = '';
}

function form_fun_cake_unsure(){
  drupal_set_message(t('Make up your mind fool'), 'warning');
}
