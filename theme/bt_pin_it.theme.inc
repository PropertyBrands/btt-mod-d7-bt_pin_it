<?php
/**
 * Implements hook_preprocess_HOOK().
 */
function bt_pin_it_preprocess_pin_it_btn(&$variables) {
  $img_tag = array(
    '#theme' => 'image',
    '#path' => $variables['pin_it_icon_url'],
    '#title' => 'Pin It',
  );
  $variables['pin_it_img_tag'] = drupal_render($img_tag);
  $variables['link_options_array'] = array(
    'attributes' => $variables['attributes'],
    'html' => TRUE,
    'query' => array(
      'url' => $variables['page_url'],
      'media' => $variables['media_url'],
      'description' => $variables['description'],
    ),
  );
}