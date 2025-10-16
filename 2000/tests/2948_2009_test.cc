#include "2000/src/2948_2009.h"

#include "test_headers/test_helper.h"

class _2009Test : public IOTestFixture<_2009> {};

TEST_F(_2009Test, SampleCase) { RunTest("1 1", "Thursday"); }

TEST_F(_2009Test, SampleCase2) { RunTest("17 1", "Saturday"); }

TEST_F(_2009Test, SampleCase3) { RunTest("25 9", "Friday"); }
