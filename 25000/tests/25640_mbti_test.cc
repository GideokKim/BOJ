#include "25000/src/25640_mbti.h"

#include "test_headers/test_helper.h"

class MBTITest : public IOTestFixture<MBTI> {};

TEST_F(MBTITest, SampleCase) {
  RunTest("ESTJ\n5\nISTP\nESTJ\nINTP\nESTJ\nENTJ", "2");
}

TEST_F(MBTITest, SampleCase2) {
  RunTest("INTP\n6\nINTP\nINTP\nESFP\nISFP\nINFP\nINTP", "3");
}
