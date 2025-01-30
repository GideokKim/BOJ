#include "11000/src/11399_atm.h"

#include "test_headers/test_helper.h"

class ATMTest : public IOTestFixture<ATM> {};

TEST_F(ATMTest, SampleCase) { RunTest("5\n3 1 4 3 2", "32"); }
