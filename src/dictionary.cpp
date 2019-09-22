#include "read.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <cstring>
#include <utility>

using namespace std;

void Dictionary() {

  string English, Russian;
  map<string, string> size;

  ifstream Eng("../bin/words");
  ifstream Rus("../bin/translate");

  while (getline(Eng, English) && getline(Rus, Russian))
    size.insert(pair<string, string>(English, Russian));

  for (auto it = size.begin(), end = size.end(); it != end; ++it)
    cout << it->first << "-" << it->second << endl;
  cout << endl;
}