#include "9000/src/9517_i_love_croatia.h"

#include "test_headers/test_helper.h"

class ILoveCroatiaTest : public IOTestFixture<ILoveCroatia> {};

TEST_F(ILoveCroatiaTest, SampleCase) {
  RunTest("1\n5\n20 T\n50 T\n80 T\n50 T\n30 T", "5");
}

TEST_F(ILoveCroatiaTest, SampleCase2) {
  RunTest("3\n5\n100 T\n100 N\n100 T\n100 T\n100 N", "4");
}

TEST_F(ILoveCroatiaTest, SampleCase3) {
  RunTest("5\n6\n70 T\n50 P\n30 N\n50 T\n30 P\n80 T", "7");
}