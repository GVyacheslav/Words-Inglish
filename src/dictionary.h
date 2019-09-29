#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <fstream>
#include <map>
#include <utility>

using namespace std;

void Print_dictionary(
        map<string, string>& size, ifstream& Translate, ifstream& Words);

#endif