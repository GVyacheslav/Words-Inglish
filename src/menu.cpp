#include "comparsion.h"
#include "read.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void menu() {
  int step = 0;

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
      print_file_eng();
      break;

    case 2:
      print_file_rus();
      break;

    case 3:
      cout << "Введите перевод с русского на английский язык" << endl;
      input_words_eng();
      break;

    case 4:
      cout << "Введите перевод с английского на русский язык" << endl;
      input_translate();
      break;

    case 5:
      exit(1);
      break;
    }
  } else {
    cout << "Не удалось считать файл!";
  }
}