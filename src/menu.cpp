#include "comparsion.h"
#include "read.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void menu() {
  int step = 0;
  while (true) {
    cout << "Выберите действие\n";
    cout << "1) Вывести сборник слов на английском языке\n";
    cout << "2) Вывести сборник слов на русском языке\n";
    cout << "3) Упражнение для запоминания на английском языке\n";
    cout << "4) Упражнение для запоминания на русском языке\n";
    cout << "5) Выход из программы\n";
    cin >> step;
    if (check_read() == true) {
      switch (step) {

      case 1:
        system("clear");
        print_file_eng();
        break;

      case 2:
        system("clear");
        print_file_rus();
        break;

      case 3:
        system("clear");
        cout << "Введите перевод с русского на английский язык" << endl;
        input_words_eng();
        break;

      case 4:
        system("clear");
        cout << "Введите перевод с английского на русский язык" << endl;
        input_translate();
        break;

      case 5:
        system("clear");
        break;
      default:
        system("clear");
        continue;
      }
    } else {
      cout << "Не удалось считать файл!";
    }
  }
}