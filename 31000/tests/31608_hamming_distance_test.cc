#include "31000/src/31608_hamming_distance.h"

#include "test_headers/test_helper.h"

class HammingDistanceTest : public IOTestFixture<HammingDistance> {};

TEST_F(HammingDistanceTest, SampleCase) { RunTest("3\njoi\nioi", "1"); }

TEST_F(HammingDistanceTest, SampleCase2) { RunTest("5\nmarch\napril", "4"); }
