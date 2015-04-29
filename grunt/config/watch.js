'use strict';
module.exports = {
  styles: {
    files: ['sites/all/themes/custom/midasmovers/less/**/*.less'], // which files to watch
    tasks: ['less'],
    options: {
      nospawn: true
    }
  }
}