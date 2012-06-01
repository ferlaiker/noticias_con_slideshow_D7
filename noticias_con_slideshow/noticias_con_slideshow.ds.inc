<?php
/**
 * @file
 * noticias_con_slideshow.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function noticias_con_slideshow_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_medium',
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|article|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function noticias_con_slideshow_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'share';
  $ds_field->label = 'share';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_default_style ">
<a class="addthis_button_preferred_1"></a>
<a class="addthis_button_preferred_2"></a>
<a class="addthis_button_preferred_3"></a>
<a class="addthis_button_preferred_4"></a>
<a class="addthis_button_compact"></a>
<a class="addthis_counter addthis_bubble_style"></a>
</div>
<script type="text/javascript" src="http://s7.addthis.com/js/250/addthis_widget.js#pubid=ra-4fa6b563167adf2e"></script>
<!-- AddThis Button END -->',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['share'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function noticias_con_slideshow_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'field_video',
        1 => 'field_image',
      ),
      'left' => array(
        0 => 'post_date',
        1 => 'field_voting',
        2 => 'field_tags',
      ),
      'right' => array(
        0 => 'body',
        1 => 'links',
      ),
      'footer' => array(
        0 => 'field_cat',
      ),
    ),
    'fields' => array(
      'field_video' => 'header',
      'field_image' => 'header',
      'post_date' => 'left',
      'field_voting' => 'left',
      'field_tags' => 'left',
      'body' => 'right',
      'links' => 'right',
      'field_cat' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_form';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => FALSE,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'body',
        1 => 'field_media',
        2 => 'field_video',
        3 => 'field_image',
      ),
      'right' => array(
        0 => 'field_smdf_selec',
        1 => 'field_voting',
        2 => 'field_cat',
        3 => 'field_tags',
      ),
      'hidden' => array(
        0 => 'path',
        1 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'body' => 'left',
      'field_media' => 'left',
      'field_video' => 'left',
      'field_image' => 'left',
      'field_smdf_selec' => 'right',
      'field_voting' => 'right',
      'field_cat' => 'right',
      'field_tags' => 'right',
      'path' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
  );
  $export['node|article|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
    ),
    'limit' => array(
      'field_image' => '1',
    ),
    'classes' => array(),
  );
  $export['node|article|teaser'] = $ds_layout;

  return $export;
}
