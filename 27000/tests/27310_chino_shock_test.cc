#include "27000/src/27310_chino_shock.h"

#include "test_headers/test_helper.h"

class ChinoShockTest : public IOTestFixture<ChinoShock> {};

TEST_F(ChinoShockTest, SampleCase) { RunTest(":chino_shock:", "20"); }

TEST_F(ChinoShockTest, SampleCase2) { RunTest(":chinoaww:", "12"); }

TEST_F(ChinoShockTest, SampleCase3) { RunTest(":chino_very_shock:", "30"); }
