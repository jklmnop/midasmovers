<?php
function midasmovers_preprocess_page(&$variables) {
  unset($variables['navbar_classes_array'][
    in_array('container', $variables['navbar_classes_array'])
  ]);
}