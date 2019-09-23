#ifndef MENU_H
#define MENU_H
#include <fstream>

using namespace std;

void menu(ifstream& Translate, ifstream& Words);
void check_input_data(int& step, int& temp);

#endif