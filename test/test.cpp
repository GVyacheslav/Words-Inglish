#define CATCH_CONFIG_MAIN
#include "../src/comparsion.h"
#include "../src/menu.h"
#include "../src/read.h"
#include "../thirdparty/single_include/catch2/catch.hpp"

TEST_CASE("Test2") {
  ifstream Translate;
  ifstream Words;

  REQUIRE(Open_file(Translate, "......") == 0);

  REQUIRE(Open_file(Translate, "translate") == 1);

  REQUIRE(Open_file(Words, "words") == 1);

  REQUIRE(Open_file(Words, "....") == 0);
}