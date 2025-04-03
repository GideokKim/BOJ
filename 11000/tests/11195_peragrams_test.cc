#include "11000/src/11195_peragrams.h"

#include "test_headers/test_helper.h"

class PeragramsTest : public IOTestFixture<Peragrams> {};

TEST_F(PeragramsTest, SampleCase) { RunTest("abc", "2"); }

TEST_F(PeragramsTest, SampleCase2) { RunTest("aab", "0"); }

TEST_F(PeragramsTest, SampleCase3) { RunTest("aabb", "0"); }

TEST_F(PeragramsTest, SampleCase4) { RunTest("aabc", "1"); }

TEST_F(PeragramsTest, SampleCase5) { RunTest("aabbc", "0"); }
