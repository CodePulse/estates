<?php
/**
 * @file
 * Returns HTML for a region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728112
 */

?>
<?php if ($content): ?>
<div class="full-width-wrapper <?php print $region;?>">
  <div class="<?php print $classes; ?> full-width-content">
	  <div class="region-po">
    <?php print $content; ?>
	  </div>
  </div>
</div>
<?php endif; ?>
