#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

void input_str(string& Input) {
  cin >> Input;
}

void input_words_eng() {
  string Input, Tempstr, Temps;
  int Result;
  ifstream Translate("../bin/translate");
  ifstream Words("../bin/words");
  while (getline(Translate, Tempstr) && getline(Words, Temps)) {
    cout << Tempstr << "-";
    input_str(Input);
    transform(Input.begin(), Input.end(), Input.begin(), ::tolower);
    Result = Temps.compare(Input);
    if (Result == 0) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
}

void input_translate() {
  string Tempstr, Input, Temps;
  int Result;
  ifstream Translate("../bin/translate");
  ifstream Words("../bin/words");

  while (getline(Translate, Tempstr) && getline(Words, Temps)) {
    cout << Temps << "-";
    input_str(Input);
    transform(Input.begin(), Input.end(), Input.begin(), ::tolower);
    Result = Tempstr.compare(Input);
    if (Result == 0) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
}
