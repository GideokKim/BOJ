#include "11000/src/11047_coin_0.h"

#include "test_headers/test_helper.h"

class Coin0Test : public IOTestFixture<Coin0> {};

TEST_F(Coin0Test, SampleCase) {
  RunTest("10 4200\n1\n5\n10\n50\n100\n500\n1000\n5000\n10000\n50000", "6");
}

TEST_F(Coin0Test, SampleCase2) {
  RunTest("10 4790\n1\n5\n10\n50\n100\n500\n1000\n5000\n10000\n50000", "12");
}
