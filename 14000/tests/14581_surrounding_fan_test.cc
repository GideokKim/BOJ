#include "14000/src/14581_surrounding_fan.h"

#include "test_headers/test_helper.h"

class SurroundingFanTest : public IOTestFixture<SurroundingFan> {};

TEST_F(SurroundingFanTest, SampleCase) {
  RunTest("appa", ":fan::fan::fan:\n:fan::appa::fan:\n:fan::fan::fan:");
}

TEST_F(SurroundingFanTest, SampleCase2) {
  RunTest("h0ngjun7", ":fan::fan::fan:\n:fan::h0ngjun7::fan:\n:fan::fan::fan:");
}
