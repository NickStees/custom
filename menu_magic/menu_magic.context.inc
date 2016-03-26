<?php

function menu_magic_node_context($nid){
  if(is_numeric($nid) && $node = node_load($nid)){

    $text = 'This content is made magic:::'.$node->body['und'][0]['value'];

    $output = array (
      '#type' => 'markup',
      '#markup' => $text,

    );

    return $output;
  } else {
    return drupal_not_found();
  }

}
