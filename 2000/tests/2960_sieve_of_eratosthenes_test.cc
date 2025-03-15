#include "2000/src/2960_sieve_of_eratosthenes.h"

#include "test_headers/test_helper.h"

class SieveOfEratosthenesTest : public IOTestFixture<SieveOfEratosthenes> {};

TEST_F(SieveOfEratosthenesTest, SampleCase) { RunTest("7 3", "6"); }

TEST_F(SieveOfEratosthenesTest, SampleCase2) { RunTest("15 12", "7"); }

TEST_F(SieveOfEratosthenesTest, SampleCase3) { RunTest("10 7", "9"); }
