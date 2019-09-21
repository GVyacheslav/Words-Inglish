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
  string Tempstr;
  ifstream Translate("translate");

  while (getline(Translate, Tempstr))
    cout << Tempstr << endl;

  Translate.close();
}

void print_file_eng() {
  string Tempstr;
  ifstream Wordbook("words");

  while (getline(Wordbook, Tempstr))
    cout << Tempstr << endl;

  Wordbook.close();
}