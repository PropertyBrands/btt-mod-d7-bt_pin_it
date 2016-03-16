# mod-d7-bt_pin_it
Provides a theme function and tpl file for rendering a link to Pin and image. Pinterest gives us several ways to add PinIt buttons to content. The least performance hindering (and simplest) way to do use PinIt functionality is with a simple link.

Pinterest docs: https://developers.pinterest.com/docs/widgets/pin-it/ (look for "If You're Using HTML")

Usage:

<code>
$pin_it_btn = array(
   '#theme' => 'pin_it_btn',
   '#page_url' => url(current_path(), array('absolute' => TRUE)),
   '#media_url' => url($path, array('absolute' => TRUE)),
   '#description' => $slide['#item']['title'],
);

print drupal_render($pin_it_btn);
</code>
