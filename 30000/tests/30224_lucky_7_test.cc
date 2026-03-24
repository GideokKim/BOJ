#include "30000/src/30224_lucky_7.h"

#include "test_headers/test_helper.h"

class Lucky7Test : public IOTestFixture<Lucky7> {};

TEST_F(Lucky7Test, SimpleCase) { RunTest("25", "0"); }

TEST_F(Lucky7Test, SimpleCase2) { RunTest("42", "1"); }

TEST_F(Lucky7Test, SimpleCase3) { RunTest("170", "2"); }

TEST_F(Lucky7Test, SimpleCase4) { RunTest("777", "3"); }

TEST_F(Lucky7Test, SimpleCase5) { RunTest("1", "0"); }

TEST_F(Lucky7Test, SimpleCase6) { RunTest("70", "3"); }