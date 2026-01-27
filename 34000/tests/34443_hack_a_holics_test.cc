#include "34000/src/34443_hack_a_holics.h"

#include "test_headers/test_helper.h"

class HackAHolicsTest : public IOTestFixture<HackAHolics> {};

TEST_F(HackAHolicsTest, SampleCase) { RunTest("5\n24739\n1000", "5000"); }
