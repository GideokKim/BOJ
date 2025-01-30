#include "3000/src/3276_icons.h"

#include "test_headers/test_helper.h"

class IconsTest : public IOTestFixture<Icons> {};

TEST_F(IconsTest, SampleCase) { RunTest("2", "1 2"); }

TEST_F(IconsTest, SampleCase2) { RunTest("5", "2 3"); }

TEST_F(IconsTest, SampleCase3) { RunTest("14", "3 5"); }
