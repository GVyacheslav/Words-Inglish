#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

int check_translate(
        string& Input,
        string& Temps,
        ifstream& Translate,
        ifstream& Words,
        string& Tempstr,
        int& Result) {
  transform(Input.begin(), Input.end(), Input.begin(), ::tolower);
  Result = Temps.compare(Input);
  if (Result == 0) {
    return 0;
  } else {
    return 1;
  }
}

void input_words_eng(
        string& Input,
        string& Temps,
        ifstream& Translate,
        ifstream& Words,
        string& Tempstr,
        int& Result) {
  cout << Tempstr << "-";
  cin >> Input;
  check_translate(Input, Temps, Translate, Words, Tempstr, Result);
  if (Result == 0) {
    cout << "Верно\n";
  } else {
    cout << "Не правильно\n";
  }
}

int check_translate_ru(
        string& Input,
        string& Temps,
        ifstream& Translate,
        ifstream& Words,
        string& Tempstr,
        int& Result) {
  transform(Input.begin(), Input.end(), Input.begin(), ::tolower);
  Result = Tempstr.compare(Input);
  if (Result == 0) {
    return 0;
  } else {
    return 1;
  }
}

void input_words_ru(
        string& Input,
        string& Temps,
        ifstream& Translate,
        ifstream& Words,
        string& Tempstr,
        int& Result) {
  cout << Temps << "-";
  cin >> Input;
  check_translate_ru(Input, Temps, Translate, Words, Tempstr, Result);
  if (Result == 0) {
    cout << "Верно\n";
  } else {
    cout << "Не правильно\n";
  }
}