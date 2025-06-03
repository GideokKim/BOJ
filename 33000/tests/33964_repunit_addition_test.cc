#include "33000/src/33964_repunit_addition.h"

#include "test_headers/test_helper.h"

class RepunitAdditionTest : public IOTestFixture<RepunitAddition> {};

TEST_F(RepunitAdditionTest, SampleCase) { RunTest("3 2", "122"); }

TEST_F(RepunitAdditionTest, SampleCase2) { RunTest("5 7", "1122222"); }

TEST_F(RepunitAdditionTest, SampleCase3) { RunTest("1 1", "2"); }
