#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

void input_words_eng(ifstream& Translate, ifstream& Words) {
  string Input, Tempstr, Temps;
  int Result;

  while (getline(Translate, Tempstr) && getline(Words, Temps)) {
    cout << Tempstr << "-";
    cin >> Input;

    Result = Temps.compare(Input);
    if (Result == 0) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
}

void input_translate(ifstream& Translate, ifstream& Words) {
  string Tempstr, Input, Temps;
  int Result;

  while (getline(Translate, Tempstr) && getline(Words, Temps)) {
    cout << Temps << "-";
    cin >> Input;
    Result = Tempstr.compare(Input);
    if (Result == 0) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
}
