#include "7000/src/7789_tele_prime.h"

#include "test_headers/test_helper.h"

class TelePrimeTest : public IOTestFixture<TelePrime> {};

TEST_F(TelePrimeTest, SimpleCase) { RunTest("946859 2", "Yes"); }
