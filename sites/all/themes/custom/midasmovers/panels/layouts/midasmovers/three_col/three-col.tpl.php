<div 
  <?php if (!empty($css_class)) { print "class=\"$css_class\""; } ?> 
  <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>
>
  <div class="col-sm-4"><?= $content['left']; ?></div>
  <div class="col-sm-4"><?= $content['middle']; ?></div>
  <div class="col-sm-4"><?= $content['right']; ?></div>
</div>