<?php
function islandora_bioinformatics_lcms_preprocess_islandora_bioinformatics_lcms_upload_form(array &$variables) {

  $islandora_object = $variables['islandora_object'];
  // CSV and RAW 
  if (isset($islandora_object['LCMS'])){
    $lcms_data = url("islandora/object/{$islandora_object->id}/datastream/LCMS/view");
    $variables["LCMS_DATA"] = $lcms_data;
  }

}
