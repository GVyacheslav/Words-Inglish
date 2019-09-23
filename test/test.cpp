#define CATCH_CONFIG_MAIN
#include "../src/comparsion.h"
#include "../src/menu.h"
#include "../src/read.h"
#include "../thirdparty/single_include/catch2/catch.hpp"

TEST_CASE("Test1") {
  ifstream Translate("../bin/translate");
  ifstream Words("../bin/words");

  REQUIRE(check_read() == true);
  REQUIRE_FALSE(check_read() == false);
}