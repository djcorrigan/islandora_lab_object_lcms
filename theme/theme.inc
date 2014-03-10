<?php
function islandora_bioinformatics_lcms_preprocess_islandora_bioinformatics_lcms_upload_form(array &$variables) {

  $islandora_object = $variables['islandora_object'];
  // CSV 
  if (isset($islandora_object['CSV'])) {
    $csv_size_url = url("islandora/object/{$islandora_object->id}/datastream/CSV/view");
    $params = array(
      'title' => $islandora_object->label,
      'path' => $csv_size_url,
    );
    $variables['islandora_csv'] = theme('CSV', $params);
  }

  if (isset($islandora_object['RAW'])) {
    $raw_size_url = url("islandora/object/{islandora_object->id}/datastream/RAW/view");
    $params = array(
      'title' => $islandora_object->label,
      'path' => $raw_size_url,
    );
    $variables['islandora_raw'] = theme('RAW', $params);
  }
}
