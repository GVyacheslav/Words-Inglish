#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

int input_words_eng() {

  string Input, Tempstr;
  ifstream Translate("translate");

  while (getline(Translate, Tempstr)) {
    cout << Tempstr << "-";
    cin >> Input;

    if (Tempstr.compare(Input) == 1) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
  return 0;
}

int input_translate() {

  string Tempstr, Input;
  ifstream Wordbook("words");

  while (getline(Wordbook, Tempstr)) {
    cout << Tempstr << "-";
    cin >> Input;

    if (Tempstr.compare(Input) == 1) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
  return 0;
}
