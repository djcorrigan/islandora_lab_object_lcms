<?php
/*
  Template file for lcms object page.

  Honestly not sure what's going on here, basically just copying from specimen...

  What will we do with the raw, we probably don't want to display it by any means.
*/

$islandora_content = $islandora_object['LCMS']->content;
$path = drupal_get_path('module', 'islandora_lab_object_lcms');

echo "<pre>";
var_dump($variables["LCMS_DATA"]);
echo "</pre>";
?>

<div class="islandora-lcms-object islandora">
  <div class ="lcms_data">
    <table>
      <tr>
        <td>Run Title</td>
        <td><?php echo $variables["LCMS_DATA"]["run_title"] ?></td>
      </tr>
    </table>
  </div>
</div>
