#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

int input_translate() {
  string Strtranslate, Input, output;
  ifstream Wordbook("words");

  while (getline(Wordbook, Strtranslate)) {
    cout << Strtranslate;
    cout << " - ";
    output = input_data(Input);
    if (Strtranslate == output) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
  return 0;
}