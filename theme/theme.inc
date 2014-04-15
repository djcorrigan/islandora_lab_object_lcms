<?php

/*
*
* @file theme.inc
*
*/

function islandora_bioinformatics_lcms_preprocess_islandora_lab_object_lcms_upload_form(array &$variables) {

  $islandora_object = $variables['islandora_object'];
  // CSV and RAW 
  if (isset($islandora_object['LCMS'])) { //THIS NEEDS TO BE WORKED ON, IT'S NOT BEING SET.
 
    //See if this is actually reached.
  echo "Did this work?!";

    $lcms_data = url("islandora/object/{$islandora_object->id}/datastream/LCMS/view");
    $variables["LCMS_DATA"] = $lcms_data;
  }

}
