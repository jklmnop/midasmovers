'use strict';
module.exports = function(grunt) {

  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),

    less: {
      development: {
        options: {
          compress: true,
          yuicompress: true,
          optimization: 2
        },
        files: {
          'sites/all/themes/custom/midasmovers/css/style.css': 'sites/all/themes/custom/midasmovers/less/style.less'
        }
      }
    },
    watch: {
      styles: {
        files: ['sites/all/themes/custom/midasmovers/less/**/*.less'], // which files to watch
        tasks: ['less'],
        options: {
          nospawn: true
        }
      }
    }
  });

  grunt.loadNpmTasks('grunt-contrib-less');
  grunt.loadNpmTasks('grunt-contrib-watch');



  grunt.registerTask('default',['less', 'watch']);

}