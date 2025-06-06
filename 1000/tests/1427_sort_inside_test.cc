#include "1000/src/1427_sort_inside.h"

#include "test_headers/test_helper.h"

class SortInsideTest : public IOTestFixture<SortInside> {};

TEST_F(SortInsideTest, SampleCase) { RunTest("2143", "4321"); }

TEST_F(SortInsideTest, SampleCase2) { RunTest("999998999", "999999998"); }

TEST_F(SortInsideTest, SampleCase3) { RunTest("61423", "64321"); }

TEST_F(SortInsideTest, SampleCase4) { RunTest("500613009", "965310000"); }
