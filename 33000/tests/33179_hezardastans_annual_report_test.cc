#include "33000/src/33179_hezardastans_annual_report.h"

#include "test_headers/test_helper.h"

class HezardastansAnnualReportTest
    : public IOTestFixture<HezardastansAnnualReport> {};

TEST_F(HezardastansAnnualReportTest, SimpleCase) {
  RunTest("5\n1 1 2 1 2", "5");
}

TEST_F(HezardastansAnnualReportTest, SimpleCase2) {
  RunTest("8\n1 2 3 2 2 5 4 2", "12");
}
