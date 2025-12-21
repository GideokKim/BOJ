#include "11000/src/11655_rot13.h"

#include "test_headers/test_helper.h"

class Rot13Test : public IOTestFixture<Rot13> {};

TEST_F(Rot13Test, SampleCase) {
  RunTest("Baekjoon Online Judge", "Onrxwbba Bayvar Whqtr");
}

TEST_F(Rot13Test, SampleCase2) { RunTest("One is 1", "Bar vf 1"); }
