<?php
/**
 * @file
 * noticias_con_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function noticias_con_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function noticias_con_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: principal
  $styles['principal'] = array(
    'name' => 'principal',
    'effects' => array(
      7 => array(
        'label' => 'Escalar y recortar',
        'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '680',
          'height' => '400',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function noticias_con_slideshow_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artículo'),
      'base' => 'node_content',
      'description' => t('Usar este contenido para la sección REVISTA'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
