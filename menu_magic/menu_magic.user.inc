<?php

// Page callback for the "user/%/magic" tab
function menu_magic_user_tab($wildcard){
  if(is_numeric($wildcard) && ($account = user_load($wildcard))){
    //if valid wildcard
    return array(
      '#type' => 'markup',
      '#markup' => t('%username is totally awesome!', array('%username' => $account->name)),
    );
  } else {
    //not valid wildcard
    return drupal_not_found();
  }

}
