#include "33000/src/33165_footrace.h"

#include "test_headers/test_helper.h"

class FootraceTest : public IOTestFixture<Footrace> {};

TEST_F(FootraceTest, SampleCase) { RunTest("5\n3", "15"); }

TEST_F(FootraceTest, SampleCase2) { RunTest("2\n4", "8"); }
