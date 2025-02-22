#include "9000/src/9366_triangle_classification.h"

#include "test_headers/test_helper.h"

class TriangleClassificationTest
    : public IOTestFixture<TriangleClassification> {};

TEST_F(TriangleClassificationTest, SampleCase) {
  RunTest("2\n3 3 4\n6 4 2", "Case #1: isosceles\nCase #2: invalid!\n");
}
