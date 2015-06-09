<?php
/**
 * @file
 * wwm_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function wwm_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article_post-body'
  $field_instances['node-article_post-body'] = array(
    'bundle' => 'article_post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-article_post-field_tags'
  $field_instances['node-article_post-field_tags'] = array(
    'bundle' => 'article_post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter <em>Tags</em> to categorize this post.  You can enter as many tags you wish separated with commas.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-book-body'
  $field_instances['node-book-body'] = array(
    'bundle' => 'book',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-calendar_item-field_calendar_tags'
  $field_instances['node-calendar_item-field_calendar_tags'] = array(
    'bundle' => 'calendar_item',
    'default_value' => array(
      0 => array(
        'tid' => 'autocreate',
        'vid' => 5,
        'name' => 'Reservation',
        'vocabulary_machine_name' => 'calendar_tags',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_calendar_tags',
    'label' => 'Calendar Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-calendar_item-field_date_and_time'
  $field_instances['node-calendar_item-field_date_and_time'] = array(
    'bundle' => 'calendar_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_date_and_time',
    'label' => 'Date and Time',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 1,
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'none',
        'repeat_collapsed' => 1,
        'text_parts' => array(),
        'year_range' => '-0:+5',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-calendar_item-field_description'
  $field_instances['node-calendar_item-field_description'] = array(
    'bundle' => 'calendar_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe the details of the Calendar Item Here.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'summary' => array(
          'format' => 'full_html',
          'value' => '',
        ),
        'value' => '',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'php_code' => 0,
          'plain_text' => 0,
          'popup_tags' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => -7,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'popup_tags' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-press_release-body'
  $field_instances['node-press_release-body'] = array(
    'bundle' => 'press_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The lead sentence contains the most important information in 25 words or less.  Grab your reader\'s attention here by simply stating the news you have to announce.  Do not assume that your reader has read your headline or summary paragraph; the lead should stand on its own.  Be sure to include your important keywords in the headline, summary and lead paragraph. Add the Web address here for a quick link and to reinforce the site name and location.</p>

<p>A news release, like a news story, keeps sentences and paragraphs short, about three or four lines per paragraph. The first couple of paragraphs should answer the who, what, when, where, why and how questions. The news media may take information from a news release to craft a news or feature article or may use information in the release word-for-word.</p>

<p>The standard press release is 300 to 800 words and checked for spelling and grammar before submission.</p>

<p>The news release expounds on the information provided in the lead paragraph. It includes quotes from key people or subject matter experts. It contains more details about the news you have to tell, which can be about something unique or controversial or about a prominent person, place or thing.  It also includes links to the website in this form: http://www.DomainName.com</p>

<p>The tone is neutral and objective, not full of hype or text that is typically found in an advertisement. Avoid directly addressing your target audience. The use of “I,” “we” and “you” outside of a direct quotation is a flag that your copy is an advertisement rather than a news release.</p>

<p>Do not include an e-mail address in the body of the release. If you do, it will be protected from spam bots with a notice to that effect, which will overwrite your e-mail address.</p>

<p><em>The final paragraph of a traditional news release contains the least newsworthy material, but for an online release, it’s typical to restate and summarize the key points with a paragraph like the next one.</em><p>
<p><ins><q>For additional information on the news that is the subject of this release, contact Your Name or visit <a href="http://www.DomainName.com">http://www.DomainName.com</a></q></ins></p>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Story',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-press_release-field_media_player'
  $field_instances['node-press_release-field_media_player'] = array(
    'bundle' => 'press_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => NULL,
        'settings' => array(),
        'type' => NULL,
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_media_player',
    'label' => 'Media Player',
    'required' => 0,
    'settings' => array(
      'show_player' => TRUE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => NULL,
      'settings' => array(),
      'type' => NULL,
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-press_release-field_pr_about'
  $field_instances['node-press_release-field_pr_about'] = array(
    'bundle' => 'press_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>Include a short <em>"backgrounder or boilerplate”<em> about the you or the person who is newsworthy before you list the contact person’s name and phone number.</p>
<p>Start with the line:
<ins><q>About the [Your Name]:</q></ins></p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_pr_about',
    'label' => 'About',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-press_release-field_pr_contact'
  $field_instances['node-press_release-field_pr_contact'] = array(
    'bundle' => 'press_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pr_contact',
    'label' => 'Contact',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-press_release-field_pr_multimedia'
  $field_instances['node-press_release-field_pr_multimedia'] = array(
    'bundle' => 'press_release',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_pr_multimedia',
    'label' => 'Multimedia',
    'required' => 0,
    'settings' => array(
      'file_extensions' => 'jpg jpeg gif png txt pdf doc xls ppt pps docx xlsx pptx ppsx numbers pages key odt ods odp mp3 mov m4v mp4 mpeg avi ogg wmv ico',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'bliptv' => 'bliptv',
          'flickr' => 'flickr',
          'node' => 'node',
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'default' => 'default',
          'image' => 'image',
          'video' => 'video',
        ),
        'file_extensions' => 'jpg jpeg gif png txt pdf doc xls ppt pps docx xlsx numbers pages key mp3 mov m4v mp4 mpeg avi ogg wmv',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-webform-body'
  $field_instances['node-webform-body'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-webform-field_teaser'
  $field_instances['node-webform-field_teaser'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'media_embedded_text_settings' => 'default',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_teaser',
    'label' => 'Teaser',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>Include a short <em>"backgrounder or boilerplate”<em> about the you or the person who is newsworthy before you list the contact person’s name and phone number.</p>
<p>Start with the line:
<ins><q>About the [Your Name]:</q></ins></p>');
  t('<p>The lead sentence contains the most important information in 25 words or less.  Grab your reader\'s attention here by simply stating the news you have to announce.  Do not assume that your reader has read your headline or summary paragraph; the lead should stand on its own.  Be sure to include your important keywords in the headline, summary and lead paragraph. Add the Web address here for a quick link and to reinforce the site name and location.</p>

<p>A news release, like a news story, keeps sentences and paragraphs short, about three or four lines per paragraph. The first couple of paragraphs should answer the who, what, when, where, why and how questions. The news media may take information from a news release to craft a news or feature article or may use information in the release word-for-word.</p>

<p>The standard press release is 300 to 800 words and checked for spelling and grammar before submission.</p>

<p>The news release expounds on the information provided in the lead paragraph. It includes quotes from key people or subject matter experts. It contains more details about the news you have to tell, which can be about something unique or controversial or about a prominent person, place or thing.  It also includes links to the website in this form: http://www.DomainName.com</p>

<p>The tone is neutral and objective, not full of hype or text that is typically found in an advertisement. Avoid directly addressing your target audience. The use of “I,” “we” and “you” outside of a direct quotation is a flag that your copy is an advertisement rather than a news release.</p>

<p>Do not include an e-mail address in the body of the release. If you do, it will be protected from spam bots with a notice to that effect, which will overwrite your e-mail address.</p>

<p><em>The final paragraph of a traditional news release contains the least newsworthy material, but for an online release, it’s typical to restate and summarize the key points with a paragraph like the next one.</em><p>
<p><ins><q>For additional information on the news that is the subject of this release, contact Your Name or visit <a href="http://www.DomainName.com">http://www.DomainName.com</a></q></ins></p>');
  t('About');
  t('Body');
  t('Calendar Tags');
  t('Contact');
  t('Date and Time');
  t('Describe the details of the Calendar Item Here.');
  t('Description');
  t('Enter <em>Tags</em> to categorize this post.  You can enter as many tags you wish separated with commas.');
  t('Media Player');
  t('Multimedia');
  t('Story');
  t('Tags');
  t('Teaser');

  return $field_instances;
}
