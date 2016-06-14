<?php
/**
 * @file
 * Returns the HTML for the footer region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>
<?php if ($content): ?>
<div class="full-width-wrapper <?php print $region;?>">
  <footer id="footer" class="<?php print $classes; ?> full-width-content">
    <?php print $content; ?>
  </footer>
</div>
<?php endif; ?>