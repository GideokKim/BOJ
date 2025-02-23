#include "mathematics/number_theory/src/get_divisors.h"

#include "test_headers/test_helper.h"

namespace boj::mathematics::number_theory {

class GetDivisorsTest : public IOTestFixture<GetDivisors> {};

TEST_F(GetDivisorsTest, SampleCase) { RunTest("10", "1 2 5 10 "); }

TEST_F(GetDivisorsTest, SampleCase2) {
  RunTest("100", "1 2 4 5 10 20 25 50 100 ");
}

TEST_F(GetDivisorsTest, SampleCase3) {
  RunTest("1000", "1 2 4 5 8 10 20 25 40 50 100 125 200 250 500 1000 ");
}

}  // namespace boj::mathematics::number_theory
