<?php
// adjusts node content before displaying 
function menu_magic_node_context($node){
  $text = 'This content is made magic:::'.$node->body['und'][0]['value'];
  $output = array (
    '#type' => 'markup',
    '#markup' => $text,

  );
  return $output;
}
