#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>

using namespace std;

int check_read() {
  ifstream Wordbook("words");
  if (!Wordbook)
    cout << "Ошибка! Файл не найден";
  return 0;
}

int print_file() {
  ifstream Wordbook("words");

  while (!Wordbook.eof())
    cout.put(Wordbook.get());

  Wordbook.close();
  cout << endl;

  return 0;
}
