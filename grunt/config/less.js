'use strict';
module.exports = {
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
}