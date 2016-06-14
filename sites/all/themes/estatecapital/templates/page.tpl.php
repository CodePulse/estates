<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */

/* Note: our $header_type variable is set in preprocess_page in template.php */

?>
<?php print render($page['navbar']); ?>

<div class="full-width-wrapper header <?php print $header_type; ?>">
<header class="header full-width-content" id="header" role="banner">
	<?php print render($page['header']); ?>
  </header>
</div>

<?php print render($page['highlighted']); ?>



<div class="full-width-wrapper main-content">
    <div id="page" class="full-width-content">


    <div id="main">

    <div id="content" class="column" role="main">
      
        <?php if(!$is_front):?>
        <?php print $breadcrumb; ?>
        <?php endif;?>

      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>



    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>

    </div>
    
    <div id="navigation">

      <?php print render($page['navigation']); ?>

    </div><!-- navigation  -->  
    
</div>

<?php print render($page['content_middle']); ?>

<?php print render($page['content_middle_alt']); ?>

<?php print render($page['content_bottom']); ?>

<?php print render($page['book_footer']); ?>

<?php print render($page['above_footer']); ?>

<?php print render($page['footer']); ?>

<?php print render($page['bottom']); ?>
