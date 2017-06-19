<?php
/**
 * @file
 * usersfeature.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function usersfeature_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'liveAdmin1',
  'mail' => 'exampleA1@example.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'filtered_html',
  'created' => 1497878672,
  'status' => 1,
  'timezone' => 'America/New_York',
  'language' => '',
  'picture' => NULL,
  'init' => 'exampleA1@example.com',
  'data' => FALSE,
  'uuid' => '8c147d2f-d84d-4cf9-a921-85ff3d48c844',
  'roles' => array(
    2 => 'authenticated user',
    3 => 'administrator',
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  ),
  'date' => '2017-06-19 09:24:32 -0400',
);
  $users[] = array(
  'name' => 'liveUser2',
  'mail' => 'example2@example.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'filtered_html',
  'created' => 1497878690,
  'status' => 1,
  'timezone' => 'America/New_York',
  'language' => '',
  'picture' => NULL,
  'init' => 'example2@example.com',
  'data' => FALSE,
  'uuid' => '8cf9e9f5-ce67-4dd2-b3c3-f8453a13e3ec',
  'roles' => array(
    2 => 'authenticated user',
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  ),
  'date' => '2017-06-19 09:24:50 -0400',
);
  $users[] = array(
  'name' => 'lievUser3',
  'mail' => 'example3@example.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'filtered_html',
  'created' => 1497878713,
  'status' => 1,
  'timezone' => 'America/New_York',
  'language' => '',
  'picture' => NULL,
  'init' => 'example3@example.com',
  'data' => FALSE,
  'uuid' => '96538d8e-92dd-4e19-ab44-4891ae45a06c',
  'roles' => array(
    2 => 'authenticated user',
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  ),
  'date' => '2017-06-19 09:25:13 -0400',
);
  $users[] = array(
  'name' => 'admin',
  'mail' => 'example@example.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => NULL,
  'created' => 1496685700,
  'status' => 1,
  'timezone' => 'America/New_York',
  'language' => '',
  'picture' => NULL,
  'init' => 'example@example.com',
  'data' => FALSE,
  'uuid' => 'af7daf88-ccb6-40c3-bf40-beeebddce07a',
  'roles' => array(
    2 => 'authenticated user',
    3 => 'administrator',
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  ),
  'date' => '2017-06-05 14:01:40 -0400',
);
  $users[] = array(
  'name' => 'liveUser1',
  'mail' => 'example1@example.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'filtered_html',
  'created' => 1497878656,
  'status' => 1,
  'timezone' => 'America/New_York',
  'language' => '',
  'picture' => NULL,
  'init' => 'example1@example.com',
  'data' => FALSE,
  'uuid' => 'd4561424-de1e-4f15-911a-361e0c817cec',
  'roles' => array(
    2 => 'authenticated user',
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  ),
  'date' => '2017-06-19 09:24:16 -0400',
);
  return $users;
}
