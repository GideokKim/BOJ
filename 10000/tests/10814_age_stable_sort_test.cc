#include "10000/src/10814_age_stable_sort.h"

#include "test_headers/test_helper.h"

class AgeStableSortTest : public IOTestFixture<AgeStableSort> {};

TEST_F(AgeStableSortTest, SampleCase) {
  RunTest("3\n21 Junkyu\n21 Dohyun\n20 Sunyoung\n",
          "20 Sunyoung\n21 Junkyu\n21 Dohyun\n");
}
