/* Owen Monsma
 * main.cpp
 * October 2, 2014
 */

 #include <iostream>
 #include "CImg.h"
 #include "util.h"

 int main(int argc, char* argv[])
 {
  string filename = "";
// new CImg file using double for pixel values
  CImg <double> img;

//checks that a filename is provided
  if (argc != 2)
  {
    std::cout << "Please supply one image name." << std::endl;
  }
//if there is a filename, string is set to it
  else
  {
    filename = argv[1];
  }

  return 0;
 }
