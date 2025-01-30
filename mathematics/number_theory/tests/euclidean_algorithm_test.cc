#include "mathematics/number_theory/src/euclidean_algorithm.h"

#include "test_headers/test_helper.h"

namespace boj::mathematics::number_theory {

class EuclideanAlgorithmTest : public IOTestFixture<EuclideanAlgorithm> {};

TEST_F(EuclideanAlgorithmTest, SampleCase) { RunTest("10 12", "2"); }

TEST_F(EuclideanAlgorithmTest, SampleCase2) { RunTest("2484 4212", "108"); }

}  // namespace boj::mathematics::number_theory
