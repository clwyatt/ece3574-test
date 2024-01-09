#include "catch.hpp"

#include <vector>

TEST_CASE("Test std::vector ", "[std::vector]") {
  std::vector<int> vec;

  REQUIRE(vec.size() == 0);
}
