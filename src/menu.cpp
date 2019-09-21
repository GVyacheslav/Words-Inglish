#include "comparsion.h"
#include "dictionary.h"
#include "read.h"
#include <fstream>
#include <iostream>
#include <map>
#include <string>

using namespace std;

void menu() {
  int step = 0;
  while (true) {

    cout << "Выберите действие\n";
    cout << "1) Вывести словарь целиком\n";
    cout << "2) Упражнение для запоминания на английском языке\n";
    cout << "3) Упражнение для запоминания на русском языке\n";
    cin >> step;

    switch (step) {

    case 1:
      system("clear");
      if (check_read() == true) {
        Dictionary();
      } else {
        cout << "Ошибка! Файл не найден!";
      }
      break;

    case 2:
      system("clear");
      if (check_read() == true) {
        cout << "Введите перевод с русского на английский язык" << endl;
        input_words_eng();
      } else {
        cout << "Ошибка! Файл не найден!";
      }
      break;

    case 3:
      system("clear");
      if (check_read() == true) {
        cout << "Введите перевод с английского на русский язык" << endl;
        input_translate();
      } else {
        cout << "Ошибка! Файл не найден!";
      }
      break;
    }
  }
}
