#include "34000/src/34362_above.h"

#include "test_headers/test_helper.h"

class AboveTest : public IOTestFixture<Above> {};

TEST_F(AboveTest, SampleCase) { RunTest("150.5", "150.2000"); }

TEST_F(AboveTest, SampleCase2) { RunTest("60580.6373", "60580.3373"); }

TEST_F(AboveTest, SampleCase3) { RunTest("-475.1901", "-475.4901"); }
