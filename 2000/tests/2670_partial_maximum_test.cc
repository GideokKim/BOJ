#include "2000/src/2670_partial_maximum.h"

#include "test_headers/test_helper.h"

class PartialMaximumTest : public IOTestFixture<PartialMaximum> {};

TEST_F(PartialMaximumTest, SampleCase) {
  RunTest("8\n1.1\n0.7\n1.3\n0.9\n1.4\n0.8\n0.7\n1.4", "1.638");
}
