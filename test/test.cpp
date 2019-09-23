#define CATCH_CONFIG_MAIN
#include "../src/comparsion.h"
#include "../src/menu.h"
#include "../src/read.h"
#include "../thirdparty/single_include/catch2/catch.hpp"

TEST_CASE("Test1") {
  ifstream Translate("../bin/translate");
  ifstream Words("../bin/words");

  REQUIRE(check_read(Translate, Words) == true);
  REQUIRE_FALSE(check_read(Translate, Words) == false);
}

TEST_CASE("Test2") {
  ifstream Open;
  ifstream Temp;

  REQUIRE(Open_file(Temp, "......") == 0);
  REQUIRE(Open_file(Temp, "../bin/words") == 1);

  REQUIRE(Open_file(Open, "......") == 0);
  REQUIRE(Open_file(Open, "../bin/translate") == 1);
}
