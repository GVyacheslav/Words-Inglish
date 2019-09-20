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
    cin << Input;
    if (Strtranslate == output) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
  return 0;
}

int input_words_eng() {
  string Input, Strwordseng;
  ifstream Translate("translate");

  while (getline(Translate, Strwordseng)) {
    cout << Strwordseng;
    cout << " - ";
    cin << Input;
    if (Strwordseng == Input) {
      cout << "Верно\n";

    } else {
      cout << "Не правильно\n";
    }
  }
  return 0;
}