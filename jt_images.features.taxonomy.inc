<?php
/**
 * @file
 * jt_images.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function jt_images_taxonomy_default_vocabularies() {
  return array(
    'albums_cat' => array(
      'name' => 'Albums (category)',
      'machine_name' => 'albums_cat',
      'description' => 'Photo Albums or categories',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
