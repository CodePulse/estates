/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

var $ = jQuery;

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    // Place your code here.

      //svg img replacement
      svgeezy.init(false, 'png');   
      
    // dgStyle - Custom checkbox/radio handling
    $('input[type="radio"], .form-radio, input[type="checkbox"], .form-checkbox',context).each(function(){
      $el = $(this);

     if($el.context.type == "radio" && $(this).parent('.radio-custom').length == 0) {
          $el.wrap('<div class="radio-custom" />');
      }
      if($el.context.type == "checkbox" && $(this).parent('.checkbox-custom').length == 0){
          $el.wrap('<div class="checkbox-custom" />');   
      }

      $el.parent().dgStyle();
    });      
      
      $('#content').fitVids();
      
      $('.back-to-top', context).click(function(event){
          event.preventDefault();
          $("html, body").animate({ scrollTop: 0 }, 600);
      });       

	  $('.toggle-archive-btn',context).click(function(evt){
	  		evt.preventDefault();
		  	$(this).next('.archive-list-wrap').toggleClass('reveal');
	  });
	  
  	var $menu = $("#block-system-main-menu",context).clone();
	$menu.attr( "id", "block-system-main-menu-mobile" );
	$menu.mmenu({
	   // options
				   "offCanvas": {
					  "position": "right"
				   },
					"navbar": {
						"add": false,
					}
				});

      function homepage_slideshow() {
          var divs= $('.view-homepage-slider .views-row'),
              now = divs.filter(':visible'),
              next = now.next().length ? now.next() : divs.first(),
              speed = 1000;

          now.fadeOut(speed);
          next.fadeIn(speed);
      }

      $(function () {
          setInterval(homepage_slideshow, 6000);
      });
  } // end attach: function()
}; // end my_custom_behavior

	
	
$(window).resize(function (e) {
 	
});       

})(jQuery, Drupal, this, this.document);
