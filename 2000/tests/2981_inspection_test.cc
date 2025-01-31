#include "2000/src/2981_inspection.h"

#include "test_headers/test_helper.h"

class InspectionTest : public IOTestFixture<Inspection> {};

TEST_F(InspectionTest, SampleCase) { RunTest("3\n6\n34\n38", "2 4 "); }

TEST_F(InspectionTest, SampleCase2) { RunTest("5\n5\n17\n23\n14\n83", "3 "); }

TEST_F(InspectionTest, SampleCase3) {
  RunTest("2\n1\n1000000000",
          "3 9 27 37 81 111 333 999 2997 333667 1001001 3003003 9009009 "
          "12345679 27027027 37037037 111111111 333333333 999999999 ");
}
