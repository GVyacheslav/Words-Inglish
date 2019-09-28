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
  REQUIRE(Result == 1);

  string Input2 = "ABOVE";
  string Temps2 = "above";
  check_translate(Input2, Temps2, Translate, Words, Tempstr, Result);
  REQUIRE(Result == 0);

  string Input3 = "clever";
  string Temps3 = "CLEVER";
  check_translate(Input3, Temps3, Translate, Words, Tempstr, Result);
  REQUIRE(Result == -1);

  string Input4 = "ABANDONED";
  string Temps4 = "above";
  check_translate(Input4, Temps4, Translate, Words, Tempstr, Result);
  REQUIRE(Result == 1);

  string Input5 = "A21";
  string Temps5 = "";
  check_translate(Input5, Temps5, Translate, Words, Tempstr, Result);
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

  string Input3 = "умный";
  string Tempstr3 = "УМНЫЙ";
  check_translate_ru(Input3, Temps, Translate, Words, Tempstr3, Result);
  REQUIRE(Result < 0);

  string Input4 = "О";
  string Tempstr4 = "о";
  check_translate_ru(Input4, Temps, Translate, Words, Tempstr4, Result);
  REQUIRE(Result > 0);

  string Input5 = "способный";
  string Tempstr5 = "способность";
  check_translate_ru(Input5, Temps, Translate, Words, Tempstr5, Result);
  REQUIRE(Result < 0);
}