<?php

  /*
    @file
    handles uploading a csv file to an lcms as part of ingest
  */

function islandora_bioinformatics_specimen_upload_csv_form(array $form, array &form_state) {

  //sets the max upload size
  $upload_size = min((int) ini_get('post_max_size'), (int) ini_get('upload_max_filesize'));
  $extensions = array('csv');
  $form = array();

  $form['file'] = array(
    '#title' => t('LCMS csv File'),
    '#type' => 'managed_file',
    '#required' => false,
    '#description' => t('Upload the sequence file.');
    '#default_value' => isset($form_state['values']['files']) ? form_state['values']['files'] : NULL,
    '#upload_location' => 'temporary://',
    '#upload_validators' => array(
      'file_validate_extensions' => $extensions,
      'file_validate_size' => array($upload_size * 1048576),
    ),
  );
  return $form;
}
