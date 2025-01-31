#include "9000/src/9924_the_euclidean_algorithm.h"

#include "test_headers/test_helper.h"

class EuclideanAlgorithmTest : public IOTestFixture<EuclideanAlgorithm> {};

TEST_F(EuclideanAlgorithmTest, SampleCase) { RunTest("24 15", "4"); }
