#include "comparsion.h"
#include "dictionary.h"
#include "read.h"
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <stdlib.h>

using namespace std;

void text_menu() {
  cout << "Выберите действие\n";
  cout << "1) Упражнение для запоминания на английском языке\n";
  cout << "2) Упражнение для запоминания на русском языке\n";
  cout << "3) Словарь\n";
  cout << "4) Выход из программы\n";
}

int check_input_data(int& step) {
  int temp;
  do {
    temp = scanf("%d", &step);
    while (getchar() != '\n')
      ;
    if (temp != 1 || temp != 2 || temp != 3) {
      return 0;
    }
  } while (temp != 1 && temp != 2 && temp != 3);
  return 1;
}

void menu(ifstream& Translate, ifstream& Words) {
  int step = 0, temp = 0, Result;
  string Input, Temps, Tempstr;
  map<string, string> size;

  while (true) {
    text_menu();

    check_input_data(step, temp);

    system("clear");

    text_menu();

    switch (step) {
    case 1:

      system("clear");
      cout << "Введите перевод с русского на английский язык\n" << endl;

      while (getline(Translate, Tempstr) && getline(Words, Temps)) {
        input_words_eng(Input, Temps, Translate, Words, Tempstr, Result);
      }
      break;

      system("clear");

    case 2:

      cout << "Введите перевод с английского на русский язык\n" << endl;
      while (getline(Translate, Tempstr) && getline(Words, Temps)) {
        input_words_ru(Input, Temps, Translate, Words, Tempstr, Result);
      }
      break;

      system("clear");

    case 3:

      Print_dictionary(size, Translate, Words);

      break;

      system("clear");

    case 4:
      exit(1);

      system("clear");
    }
    Translate.close();
    Words.close();
    Open_file(Translate, "../bin/translate");
    Open_file(Words, "../bin/words");
  }
}