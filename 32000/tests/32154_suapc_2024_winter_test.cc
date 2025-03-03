#include "32000/src/32154_suapc_2024_winter.h"

#include "test_headers/test_helper.h"

class Suapc2024WinterTest : public IOTestFixture<Suapc2024Winter> {};

TEST_F(Suapc2024WinterTest, SimpleCase) {
  RunTest("1", "11\nA B C D E F G H J L M");
}

TEST_F(Suapc2024WinterTest, SimpleCase2) {
  RunTest("2", "9\nA C E F G H I L M");
}
