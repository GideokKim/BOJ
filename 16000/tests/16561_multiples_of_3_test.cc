#include "16000/src/16561_multiples_of_3.h"

#include "test_headers/test_helper.h"

class MultiplesOf3Test : public IOTestFixture<MultiplesOf3> {};

TEST_F(MultiplesOf3Test, SampleCase) { RunTest("9", "1"); }

TEST_F(MultiplesOf3Test, SampleCase2) { RunTest("12", "3"); }
