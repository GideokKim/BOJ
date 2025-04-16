#include "31000/src/31612_stroke_count.h"

#include "test_headers/test_helper.h"

class StrokeCountTest : public IOTestFixture<StrokeCount> {};

TEST_F(StrokeCountTest, SampleCase) { RunTest("6\njjooii", "10"); }

TEST_F(StrokeCountTest, SampleCase2) { RunTest("1\ni", "2"); }

TEST_F(StrokeCountTest, SampleCase3) { RunTest("13\njoiojiioijoio", "21"); }