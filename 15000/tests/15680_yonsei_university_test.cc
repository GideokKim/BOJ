#include "15000/src/15680_yonsei_university.h"

#include "test_headers/test_helper.h"

class YonseiUniversityTest : public IOTestFixture<YonseiUniversity> {};

TEST_F(YonseiUniversityTest, SampleCase) { RunTest("0", "YONSEI"); }

TEST_F(YonseiUniversityTest, SampleCase2) {
  RunTest("1", "Leading the Way to the Future");
}