#include "comparsion.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

bool check_read() {

  ifstream Translate("translate");
  ifstream Wordbook("words");

  if (!Wordbook && !Translate)
    cout << "Ошибка! Файл не найден";

  return true;
}

int print_file() {
  ifstream Wordbook("words");

  while (!Wordbook.eof())
    cout.put(Wordbook.get());

  Wordbook.close();
  cout << endl;

  return 0;
}
