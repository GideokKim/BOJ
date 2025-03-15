#include "2000/src/2563_confetti.h"

#include "test_headers/test_helper.h"

class ConfettiTest : public IOTestFixture<Confetti> {};

TEST_F(ConfettiTest, SampleCase) { RunTest("3\n3 7\n15 7\n5 2", "260"); }
