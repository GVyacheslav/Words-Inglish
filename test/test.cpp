#define CATCH_CONFIG_MAIN
#include "../src/comparsion.h"
#include "../src/read.h"
#include "../thirdparty/single_include/catch2/catch.hpp"

TEST_CASE("Open_file") {
  ifstream Translate;
  ifstream Words;

  REQUIRE(Open_file(Translate, "......") == 0);

  REQUIRE(Open_file(Translate, "translate") == 1);

  REQUIRE(Open_file(Words, "words") == 1);

  REQUIRE(Open_file(Words, "....") == 0);
}

TEST_CASE("check_translate") {
  string Input, Temps, Tempstr;
  ifstream Translate, Words;
  int Result;
  Open_file(Translate, "translate");
  Open_file(Words, "words");

  Input == "ABANDON";
  Temps == "abandon";
  check_translate(Input, Temps, Translate, Words, Tempstr, Result);
  REQUIRE(Result == 0);

  string Input1 = "ABAND";
  string Temps1 = "able";
  check_translate(Input1, Temps1, Translate, Words, Tempstr, Result);
  REQUIRE(Result > 0);

  string Input2 = "ABOVE";
  string Temps2 = "above";
  check_translate(Input2, Temps2, Translate, Words, Tempstr, Result);
  REQUIRE(Result == 0);

  string Input3 = "CLEVER";
  string Temps3 = "clever";
  check_translate(Input3, Temps3, Translate, Words, Tempstr, Result);
  REQUIRE(Result == 0);

  string Input4 = "ABANDONED";
  string Temps4 = "above";
  check_translate(Input4, Temps4, Translate, Words, Tempstr, Result);
  REQUIRE(Result > 0);

  string Input5 = "A21";
  string Temps5 = "blank";
  check_translate(Input5, Temps5, Translate, Words, Tempstr, Result);
  REQUIRE(Result > 0);

  string Input6 = "AcRoSs";
  string Temps6 = "across";
  check_translate(Input6, Temps6, Translate, Words, Tempstr, Result);
  REQUIRE(Result == 0);

  string Input7 = "alarmed";
  string Temps7 = "alarmed";
  check_translate(Input7, Temps7, Translate, Words, Tempstr, Result);
  REQUIRE(Result == 0);

  string Input8 = "AUThor";
  string Temps8 = "author";
  check_translate(Input8, Temps8, Translate, Words, Tempstr, Result);
  REQUIRE(Result == 0);

  string Input9 = "ПРИВЕИ";
  string Temps9 = "blank";
  check_translate(Input9, Temps9, Translate, Words, Tempstr, Result);
  REQUIRE(Result < 0);

  string Input10 = "ABANDONED";
  string Temps10 = "book";
  check_translate(Input10, Temps10, Translate, Words, Tempstr, Result);
  REQUIRE(Result > 0);

  string Input11 = "ФФФЫЫ";
  string Temps11 = "abandon";
  check_translate(Input11, Temps11, Translate, Words, Tempstr, Result);
  REQUIRE(Result < 0);
}

TEST_CASE("check_translate_ru") {
  string Input, Temps, Tempstr;
  ifstream Translate, Words;
  int Result;

  Open_file(Translate, "translate");
  Open_file(Words, "words");

  Input = "брошенный";
  Tempstr = "брошенный";
  check_translate_ru(Input, Temps, Translate, Words, Tempstr, Result);
  REQUIRE(Result == 0);

  string Input1 = "ОСТАВЛЯТЬь";
  string Tempstr1 = "оставлять";
  check_translate_ru(Input1, Temps, Translate, Words, Tempstr1, Result);
  REQUIRE(Result > 0);

  string Input3 = "УМНЫЙ";
  string Tempstr3 = "умный";
  check_translate_ru(Input3, Temps, Translate, Words, Tempstr3, Result);
  REQUIRE(Result > 0);

  string Input4 = "О";
  string Tempstr4 = "о";
  check_translate_ru(Input4, Temps, Translate, Words, Tempstr4, Result);
  REQUIRE(Result > 0);

  string Input5 = "способный";
  string Tempstr5 = "способность";
  check_translate_ru(Input5, Temps, Translate, Words, Tempstr5, Result);
  REQUIRE(Result < 0);

  string Input6 = "круг";
  string Tempstr6 = "круг";
  check_translate_ru(Input6, Temps, Translate, Words, Tempstr6, Result);
  REQUIRE(Result == 0);

  string Input7 = "ПОГЛОЩАТЬ";
  string Tempstr7 = "поглощать";
  check_translate_ru(Input7, Temps, Translate, Words, Tempstr7, Result);
  REQUIRE(Result > 0);

  string Input8 = "книга";
  string Tempstr8 = "книга";
  check_translate_ru(Input8, Temps, Translate, Words, Tempstr8, Result);
  REQUIRE(Result == 0);

  string Input9 = "мозг";
  string Tempstr9 = "мозг";
  check_translate_ru(Input9, Temps, Translate, Words, Tempstr9, Result);
  REQUIRE(Result == 0);

  string Input10 = "сыр";
  string Tempstr10 = "сыр";
  check_translate_ru(Input10, Temps, Translate, Words, Tempstr10, Result);
  REQUIRE(Result == 0);
}