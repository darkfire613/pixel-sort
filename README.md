pixel-sort
==========

My own pixel-sort program in C++.

Uses the [CImg library](http://cimg.sourceforge.net) for image manipulation.

Design Concepts
===============

The program uses the CImg library for easy loading and manipulation of images. A separate namespace, util, provides all the functions for image manipulation.

### namespace util

* **void loadImg(CImg &img, string filename);** Takes in an empty CImg object (by reference) and a string for the filename. It checks if an image by the specified name exists and is of proper filetype (for now, just .png). If it exists, it loads the specified file into the provided image.

* **void sortHorizontal(CImg &img);** Sorts the provided image horizontally. Each row of pixels is ordered darkest at left to lightest at right.

* **void sortVertical(CImg &img);** Sorts vertically. Darkest at bottom to lightest at top in each column.

* **void saveImg(CImg img, string filename);** Saves the image as the specified filename. Checks it isn't overwriting an existing file. Requires .png extension. If other extension provided, removes and saves as .png. If no extension, appends .png.
