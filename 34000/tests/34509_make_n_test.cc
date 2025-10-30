#include "34000/src/34509_make_n.h"

#include "test_headers/test_helper.h"

class MakeNTest : public IOTestFixture<MakeN> {};

TEST_F(MakeNTest, SampleCase) { RunTest("", "42"); }
