<?php
/**
 * @file
 * frontpagefeature.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function frontpagefeature_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'front page!',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1496688496,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6e5943ae-9483-4ef2-a461-3aa5ab14a06b',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'this is the body of the front page on the DEV site!

peter said put this on the dev site RIGHT NOW or else :)',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2017-06-05 14:48:16 -0400',
  'user_uuid' => 'd4561424-de1e-4f15-911a-361e0c817cec',
);
  return $nodes;
}
