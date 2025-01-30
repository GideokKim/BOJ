#include "5000/src/5597_who_didnt_turn_in_report.h"

#include "test_headers/test_helper.h"

class WhoDidntTurnInReportTest : public IOTestFixture<WhoDidntTurnInReport> {};

TEST_F(WhoDidntTurnInReportTest, SampleCase) {
  RunTest(
      "3\n1\n4\n5\n7\n9\n6\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22"
      "\n23\n24\n25\n26\n27\n28\n29\n30\n",
      "2\n8\n");
}

TEST_F(WhoDidntTurnInReportTest, SampleCase2) {
  RunTest(
      "9\n30\n6\n12\n10\n20\n21\n11\n7\n5\n28\n4\n18\n29\n17\n19\n27\n13\n16\n2"
      "6\n14\n23\n22\n15\n3\n1\n24\n25\n",
      "2\n8\n");
}
