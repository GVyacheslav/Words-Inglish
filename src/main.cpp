#include "comparsion.h"
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
  system("clear");
  menu(Translate, Words);
}