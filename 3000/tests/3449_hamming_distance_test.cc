#include "3000/src/3449_hamming_distance.h"

#include "test_headers/test_helper.h"

class HammingDistanceTest : public IOTestFixture<HammingDistance> {};

TEST_F(HammingDistanceTest, SampleCase) {
  RunTest("4\n0\n1\n000\n000\n1111111100000000\n0000000011111111\n101\n000",
          "Hamming distance is 1.\nHamming distance is 0.\nHamming distance is "
          "16.\nHamming distance is 2.\n");
}
