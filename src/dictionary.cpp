#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

bool Read_files_dictionary(map<string, string> &size) {
  ifstream Eng("words");
  ifstream Rus("translate");
  if (!Eng || !Rus)
    return false;

  string English, Russian;
  while (getline(Eng, English) && getline(Rus, Russian))
    size.insert(pair<string, string>(English, Russian));
  return true;
}

void Print_dictionary(const map<string, string> &size) {
  for (auto it = size.begin(), end = size.end(); it != end; ++it)
    cout << it->first << "-" << it->second << endl;
  cout << endl;
}