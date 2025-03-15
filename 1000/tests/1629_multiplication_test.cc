#include "1000/src/1629_multiplication.h"

#include "test_headers/test_helper.h"

class MultiplicationTest : public IOTestFixture<Multiplication> {};

TEST_F(MultiplicationTest, SampleCase) { RunTest("10 11 12", "4"); }

TEST_F(MultiplicationTest, SampleCase2) { RunTest("10 10 100", "0"); }

TEST_F(MultiplicationTest, SampleCase3) {
  RunTest("3 2147483647 2147483647", "3");
}

TEST_F(MultiplicationTest, SampleCase4) { RunTest("1 2147483647 100", "1"); }
