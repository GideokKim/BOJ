#include "5000/src/5789_do_it_do_it_not.h"

#include "test_headers/test_helper.h"

class DoItDoItNotTest : public IOTestFixture<DoItDoItNot> {};

TEST_F(DoItDoItNotTest, SampleCase) {
  RunTest("3\n00100010\n01010101\n100001", "Do-it\nDo-it-Not\nDo-it\n");
}
