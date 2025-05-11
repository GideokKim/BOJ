#include "15000/src/15000_caps.h"

#include "test_headers/test_helper.h"

class CapsTest : public IOTestFixture<Caps> {};

TEST_F(CapsTest, SampleCase) { RunTest("alert", "ALERT"); }

TEST_F(CapsTest, SampleCase2) {
  RunTest("earthisunderattack", "EARTHISUNDERATTACK");
}

TEST_F(CapsTest, SampleCase3) {
  RunTest("canyoupickupsomegroceries", "CANYOUPICKUPSOMEGROCERIES");
}
