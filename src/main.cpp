#include "comparsion.h"
#include "menu.h"
#include "read.h"
#include <cstring>
#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  ifstream Translate;
  ifstream Words;
  setlocale(0, "");
  if (Open_file(Translate, "../bin/translate") == 0
      || Open_file(Words, "../bin/words") == 0) {
    cout << "Проверьте целостность файлов words и translate\n";
    exit(1);
  }
  system("clear");
  menu(Translate, Words);
  Translate.close();
  Words.close();
}