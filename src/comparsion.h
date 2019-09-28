#ifndef COMPARSION_H
#define COMPARSION_H
#include <cstring>
#include <fstream>

using namespace std;

int Open_file(ifstream& File, string path);

int check_translate(
        string& Input,
        string& Temps,
        ifstream& Translate,
        ifstream& Words,
        string& Tempstr,
        int& Result);

void input_words_eng(
        string& Input,
        string& Temps,
        ifstream& Translate,
        ifstream& Words,
        string& Tempstr,
        int& Result);

int check_translate_ru(
        string& Input,
        string& Temps,
        ifstream& Translate,
        ifstream& Words,
        string& Tempstr,
        int& Result);

void input_words_ru(
        string& Input,
        string& Temps,
        ifstream& Translate,
        ifstream& Words,
        string& Tempstr,
        int& Result);

#endif