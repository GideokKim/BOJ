#include "9000/src/9884_euclid.h"

#include "test_headers/test_helper.h"

class EuclidTest : public IOTestFixture<Euclid> {};

TEST_F(EuclidTest, SampleCase) { RunTest("24 15", "3"); }
