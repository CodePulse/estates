<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<header class="header full-width-content" id="header" role="banner">
  <div class="slider-wrapper">

    <div class="full-width-wrapper header image">
      <div class="title-sub-wrapper">
        <h1 class="page__title"><?php print $fields['title']->content; ?></h1>

        <?php print $fields['field_subtitle']->wrapper_prefix; ?>
          <?php print $fields['subtitle']; ?>
        <?php print $fields['field_subtitle']->wrapper_suffix; ?>

      </div>
      <div class="header-image-wrapper">
        <img src="<?php print $fields['header_image']; ?>"
             alt="<?php print $fields['header_image_alt']; ?>">

        <!--  <img src="http://estates.l/sites/default/files/penguins-dark.png" alt="Mother and father penguin looking over their child" height="760" width="760">-->
      </div>

      <div class="intro-wrapper">
        <p>Speak with one of our chartered financial advisers – we'll take the
          time to understand your circumstances before providing financial
          advice that's relevant to you.</p>
        <p class="header-contact">Call us today on</p>
        <p class="header-contact">01792 477 763</p>
      </div>

    </div>
  </div>
</header>
