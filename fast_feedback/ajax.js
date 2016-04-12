(function($) {
    Drupal.behaviors.myModule = {
        'attach': function(context) {
            $('a.feedback_no', context)
                    .bind('click', function() {
                $.get('/fast_feedback/downvote/' + parseInt(this.id, 10), null, successCallback);
                return false;
            });
            $('a.feedback_yes', context)
                    .bind('click', function() {
                $.get('/fast_feedback/upvote/' + parseInt(this.id, 10), null, successCallback);
                return false;
            });
        }
    }

    var successCallback = function(response) {
        console.log(response);
        // var result = JSON.parse(response);
        // console.log(result);
        $('div#feedback').html('This page has an average satisfaction rating of '+Math.round(response.rating)+"%");
    }
})(jQuery);
