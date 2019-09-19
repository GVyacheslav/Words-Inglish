#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

int read_str() {

  string Input, Temp, Strfile;

  ifstream Translate("translate");

  while (getline(Translate, Strfile)) {
    cout << "Введите слово: ";
    cin >> Input;
    if (Strfile == Input) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
  return 0;
}