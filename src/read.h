#ifndef READ_H
#define READ_H
#include <fstream>
#include <string>

using namespace std;

int check_read(ifstream &Translate, ifstream &Words);
int Open_file(ifstream &File, string path);

#endif