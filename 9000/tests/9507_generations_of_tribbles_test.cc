#include "9000/src/9507_generations_of_tribbles.h"

#include "test_headers/test_helper.h"

class GenerationsOfTribblesTest : public IOTestFixture<GenerationsOfTribbles> {
};

TEST_F(GenerationsOfTribblesTest, SampleCase) {
  RunTest("8\n0\n1\n2\n3\n4\n5\n30\n67",
          "1\n1\n2\n4\n8\n15\n201061985\n7057305768232953720\n");
}
