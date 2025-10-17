#include "4000/src/4592_remove_duplication.h"

#include "test_headers/test_helper.h"

class RemoveDuplicationTest : public IOTestFixture<RemoveDuplication> {};

TEST_F(RemoveDuplicationTest, SampleCase) {
  RunTest("5 1 22 22 22 3\n4 98 76 20 76\n6 19 19 35 86 86 86\n1 7\n0",
          "1 22 3 $\n98 76 20 76 $\n19 35 86 $\n7 $\n");
}
