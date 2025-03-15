#include "2000/src/2438_get_a_star_1.h"

#include "test_headers/test_helper.h"

class GetStar1Test : public IOTestFixture<GetStar1> {};

TEST_F(GetStar1Test, SampleCase) { RunTest("5", "*\n**\n***\n****\n*****\n"); }
