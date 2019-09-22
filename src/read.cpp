#include "comparsion.h"
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

/*int Open_file(ifstream &File, string path) {

  File.open(path);
  if (File.fail() == 1) {
    return 0;
  } else {
    return 1;
  }
}*/

bool check_read(ifstream& Translate, ifstream& Words) {
  if (!Words || !Translate) {
    return false;
  } else {
    return true;
  }
}