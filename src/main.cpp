#include "comparsion.h"
#include "dictionary.h"
#include "menu.h"
#include "read.h"
#include <cstring>
#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  ifstream Translate("../bin/translate");
  ifstream Words("../bin/words");
  setlocale(0, "");
  // Open_file(Translate, "../bin/translate");
  // Open_file(Words, "../bin/words");
  system("clear");
  menu(Translate, Words);
}