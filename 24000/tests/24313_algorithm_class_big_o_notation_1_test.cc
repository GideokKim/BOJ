#include "24000/src/24313_algorithm_class_big_o_notation_1.h"

#include "test_headers/test_helper.h"

class AlgorithmClassBigONotation1Test
    : public IOTestFixture<AlgorithmClassBigONotation1> {};

TEST_F(AlgorithmClassBigONotation1Test, SampleCase) {
  RunTest("7 7\n8\n1", "0");
}

TEST_F(AlgorithmClassBigONotation1Test, SampleCase2) {
  RunTest("7 7\n8\n10", "1");
}

TEST_F(AlgorithmClassBigONotation1Test, SampleCase3) {
  RunTest("10 -10\n8\n1", "0");
}