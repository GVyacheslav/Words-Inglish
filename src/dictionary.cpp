#include "read.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

void Print_dictionary(
        map<string, string>& size, ifstream& Translate, ifstream& Words) {
  string English, Russian;

  while (getline(Words, English) && getline(Translate, Russian))
    size.insert(pair<string, string>(English, Russian));

  for (auto it = size.begin(), end = size.end(); it != end; ++it)
    cout << it->first << "-" << it->second << endl;
  cout << endl;
  Translate.close();
  Words.close();
}