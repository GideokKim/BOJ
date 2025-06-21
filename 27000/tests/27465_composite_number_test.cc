#include "27000/src/27465_composite_number.h"

#include "test_headers/test_helper.h"

class CompositeNumberTest : public IOTestFixture<CompositeNumber> {};

TEST_F(CompositeNumberTest, SampleCase) { RunTest("5", "1000000000"); }

TEST_F(CompositeNumberTest, SampleCase2) { RunTest("6", "1000000000"); }

TEST_F(CompositeNumberTest, SampleCase3) {
  RunTest("1000000000", "1000000000");
}