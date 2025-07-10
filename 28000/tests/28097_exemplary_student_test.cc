#include "28000/src/28097_exemplary_student.h"

#include "test_headers/test_helper.h"

class ExemplaryStudentTest : public IOTestFixture<ExemplaryStudent> {};

TEST_F(ExemplaryStudentTest, SampleCase) { RunTest("2\n12 12", "1 8"); }

TEST_F(ExemplaryStudentTest, SampleCase2) { RunTest("1\n10", "0 10"); }

TEST_F(ExemplaryStudentTest, SampleCase3) { RunTest("3\n10 11 11", "2 0"); }
