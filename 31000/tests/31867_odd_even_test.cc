#include "31000/src/31867_odd_even.h"

#include "test_headers/test_helper.h"

class OddEvenTest : public IOTestFixture<OddEven> {};

TEST_F(OddEvenTest, SimpleCase) { RunTest("9\n123456789", "1"); }

TEST_F(OddEvenTest, SimpleCase2) { RunTest("7\n1234568", "0"); }

TEST_F(OddEvenTest, AllOddCase) { RunTest("8\n12345678", "-1"); }
