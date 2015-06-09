<?php
/**
 * @file
 * wwm_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wwm_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wwm_content_types_node_info() {
  $items = array(
    'article_post' => array(
      'name' => t('Article Post'),
      'base' => 'node_content',
      'description' => t('<em>Article Posts</em> are for adding content that can organized into an article directory or used as a single user blog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'book' => array(
      'name' => t('Online Book Page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for online books, handbooks, tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'calendar_item' => array(
      'name' => t('Calendar Item'),
      'base' => 'node_content',
      'description' => t('Use this content type to add items to the sites\'s calendar.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'press_release' => array(
      'name' => t('Press Releases'),
      'base' => 'node_content',
      'description' => t('<em>Press Releases</em> are special pages that are published to the Newsroom.  They are intended to be used to make site content readily available for the members of News media.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => t('Ideally Under 80 Characters '),
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
