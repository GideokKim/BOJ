#include "18000/src/18870_coordinate_compression.h"

#include "test_headers/test_helper.h"

class CoordinateCompressionTest : public IOTestFixture<CoordinateCompression> {
};

TEST_F(CoordinateCompressionTest, SimpleCase) {
  RunTest("5\n2 4 -10 4 -9", "2 3 0 3 1 ");
}

TEST_F(CoordinateCompressionTest, SimpleCase2) {
  RunTest("6\n1000 999 1000 999 1000 999", "1 0 1 0 1 0 ");
}