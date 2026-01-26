#include "31000/src/31776_ppc_report.h"

#include "test_headers/test_helper.h"

class PpcReportTest : public IOTestFixture<PpcReport> {};

TEST_F(PpcReportTest, SampleCase) {
  RunTest("6\n1 2 3\n1 -1 1\n-1 -1 -1\n0 4 -1\n10 -1 -1\n120 120 120", "4");
}
