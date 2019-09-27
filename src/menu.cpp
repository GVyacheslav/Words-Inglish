#include "comparsion.h"
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
  cout << "3) Выход из программы\n";
}

void check_input_data(int& step, int& temp) {
  do {
    temp = scanf("%d", &step);
    while (getchar() != '\n')
      ;
    if (temp != 1 || temp != 2 || temp != 3) {
      cout << "Некорректный ввод данных!\n";
    }
  } while (temp != 1 && temp != 2 && temp != 3);
}

void menu(ifstream& Translate, ifstream& Words) {
  int step = 0, temp = 0;
  string Input;

  if (Open_file(Translate, "../bin/translate") == 1
      && Open_file(Words, "../bin/words") == 1) {
    while (true) {
      text_menu();

      check_input_data(step, temp);

      system("clear");

      text_menu();

      switch (step) {
      case 1:

        system("clear");
        cout << "Введите перевод с русского на английский язык\n" << endl;
        input_words_eng(Translate, Words);
        break;

        system("clear");

      case 2:

        cout << "Введите перевод с английского на русский язык\n" << endl;
        input_translate(Translate, Words);
        break;

        system("clear");

      case 3:

        exit(1);
        system("clear");
      }
    }
  } else {
    cout << "Ошибка! Файл не найден!\n"
         << "Проверьте целостность файлов words и translate!\n";
  }
}
