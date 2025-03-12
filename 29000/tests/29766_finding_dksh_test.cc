#include "29000/src/29766_finding_dksh.h"

#include "test_headers/test_helper.h"

class FindingDkshTest : public IOTestFixture<FindingDksh> {};

TEST_F(FindingDkshTest, SimpleCase) { RunTest("DKKSSH", "0"); }

TEST_F(FindingDkshTest, SimpleCase2) { RunTest("HDKSHDDKS", "1"); }

TEST_F(FindingDkshTest, SimpleCase3) { RunTest("SDKSHSSDKSHS", "2"); }
