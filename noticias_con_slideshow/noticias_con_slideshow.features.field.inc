<?php
/**
 * @file
 * noticias_con_slideshow.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function noticias_con_slideshow_field_default_fields() {
  $fields = array();

  // Exported field: 'node-article-body'
  $fields['node-article-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'article',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '130',
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Cuerpo',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-article-field_cat'
  $fields['node-article-field_cat'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_cat',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'news',
            'parent' => '0',
            'depth' => '',
          ),
        ),
        'options_list_callback' => 'content_taxonomy_allowed_values',
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'article',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_cat',
      'label' => 'Categorias',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-article-field_image'
  $fields['node-article-field_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'article',
      'deleted' => '0',
      'description' => 'Upload an image to go with this article.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'field_slideshow',
          'settings' => array(
            'slideshow_caption' => '',
            'slideshow_caption_link' => '',
            'slideshow_carousel_circular' => 0,
            'slideshow_carousel_image_style' => '',
            'slideshow_carousel_scroll' => '1',
            'slideshow_carousel_speed' => '500',
            'slideshow_carousel_vertical' => 0,
            'slideshow_carousel_visible' => '3',
            'slideshow_colorbox_image_style' => '',
            'slideshow_colorbox_slideshow' => '',
            'slideshow_colorbox_slideshow_speed' => '4000',
            'slideshow_colorbox_speed' => '350',
            'slideshow_colorbox_transition' => 'elastic',
            'slideshow_controls' => 1,
            'slideshow_field_collection_image' => '',
            'slideshow_fx' => 'scrollLeft',
            'slideshow_image_style' => 'principal',
            'slideshow_link' => '',
            'slideshow_order' => '',
            'slideshow_pager' => '',
            'slideshow_pager_image_style' => '',
            'slideshow_pause' => 0,
            'slideshow_speed' => '800',
            'slideshow_timeout' => '7000',
          ),
          'type' => 'slideshow',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'destacada-m',
          ),
          'type' => 'image',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'file_directory' => 'field/image',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'multiupload_imagefield_widget',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_miw',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-article-field_smdf_selec'
  $fields['node-article-field_smdf_selec'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_smdf_selec',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '0',
          1 => '1',
        ),
        'allowed_values_function' => '',
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'article',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_smdf_selec',
      'label' => 'ShopMdf Selección',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-article-field_tags'
  $fields['node-article-field_tags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tags',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tags',
            'parent' => 0,
          ),
        ),
        'options_list_callback' => 'content_taxonomy_allowed_values',
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'article',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter a comma-separated list of words to describe your content.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_tags',
      'label' => 'Tags',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'allow',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-article-field_video'
  $fields['node-article-field_video'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'article',
      'deleted' => '0',
      'description' => 'NOTA: El video debe de estar en youtube o vimeo. Si pones un video, la primera imagen que cargues a continuación sera la que se vera en los destacados y paginas de resumen, pero NO cuando se visualice el contenido',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'file_entity',
          'settings' => array(
            'file_view_mode' => 'media_large',
          ),
          'type' => 'file_rendered',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_video',
      'label' => 'Video',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'txt',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media_embedded_hide_widget',
        'settings' => array(
          'allow_edit_media_embedded' => array(
            'allow' => 'allow',
          ),
          'allowed_schemes' => array(
            'private' => 'private',
            'public' => 'public',
            'vimeo' => 'vimeo',
            'youtube' => 'youtube',
          ),
          'allowed_types' => array(
            'audio' => 0,
            'default' => 0,
            'image' => 0,
            'video' => 'video',
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_embedded_hide_widget',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-article-field_voting'
  $fields['node-article-field_voting'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_voting',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'fivestar',
      'settings' => array(
        'axis' => 'vote',
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'fivestar',
    ),
    'field_instance' => array(
      'bundle' => 'article',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'fivestar',
          'settings' => array(
            'expose' => 1,
            'style' => 'average',
            'text' => 'average',
            'widget' => array(
              'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
            ),
          ),
          'type' => 'fivestar_formatter_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_voting',
      'label' => 'Voting',
      'required' => 0,
      'settings' => array(
        'allow_clear' => 0,
        'stars' => '5',
        'target' => 'none',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'fivestar',
        'settings' => array(),
        'type' => 'exposed',
        'weight' => '6',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorias');
  t('Cuerpo');
  t('Enter a comma-separated list of words to describe your content.');
  t('Image');
  t('NOTA: El video debe de estar en youtube o vimeo. Si pones un video, la primera imagen que cargues a continuación sera la que se vera en los destacados y paginas de resumen, pero NO cuando se visualice el contenido');
  t('ShopMdf Selección');
  t('Tags');
  t('Upload an image to go with this article.');
  t('Video');
  t('Voting');

  return $fields;
}
