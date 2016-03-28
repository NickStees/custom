<?php

function menu_magic_extra($wildcard){
  $content = array(
    '#type' => 'markup',
    '#markup' => t('The Wildcard contains the value "%wildcard" ', array('%wildcard' => $wildcard)),
    '#prefix' => '<p>',
    '#suffix' => '</p>',
  );
  return $content;
}
