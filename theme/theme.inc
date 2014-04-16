<?php

/*
*
* @file theme.inc
*
*/

function islandora_lab_object_lcms_preprocess_islandora_lab_object_lcms(array &$variables) {
  $islandora_object = $variables['islandora_object'];
  // CSV and RAW 
  if (isset($islandora_object['LCMS'])) { //THIS NEEDS TO BE WORKED ON, IT'S NOT BEING SET.
    $variables["LCMS_DATA"] = lcms_LCMS_to_array($islandora_object);
  }

}
