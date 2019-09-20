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

void print_file_rus() {
  string Strfile;
  ifstream Translate("translate");

  while (getline(Translate, Strfile))
    cout << Strfile << endl;

  Translate.close();
}