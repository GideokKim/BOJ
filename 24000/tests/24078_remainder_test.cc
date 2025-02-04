#include "24000/src/24078_remainder.h"

#include "test_headers/test_helper.h"

class RemainderTest : public IOTestFixture<Remainder> {};

TEST_F(RemainderTest, SampleCase) { RunTest("50", "8"); }

TEST_F(RemainderTest, SampleCase2) { RunTest("42", "0"); }

TEST_F(RemainderTest, SampleCase3) { RunTest("5", "5"); }
