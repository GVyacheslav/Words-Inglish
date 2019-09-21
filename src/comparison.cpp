#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

int input_words_eng() {

  string Input, Tempstr, Temps;
  int Result;
  ifstream Translate("translate");
  ifstream Wordbook("words");

  while (getline(Translate, Tempstr) && getline(Wordbook, Temps)) {
    cout << Tempstr << "-";
    cin >> Input;

    Result = Temps.compare(Input);
    if (Result == 0) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
  return 0;
}

int input_translate() {

  string Tempstr, Input, Temps;
  int Result;
  ifstream Wordbook("words");
  ifstream Translate("translate");

  while (getline(Translate, Tempstr) && getline(Wordbook, Temps)) {
    cout << Temps << "-";
    cin >> Input;
    Result = Tempstr.compare(Input);
    if (Result == 0) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
  return 0;
}
