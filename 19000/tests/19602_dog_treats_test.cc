#include "19000/src/19602_dog_treats.h"

#include "test_headers/test_helper.h"

class DogTreatsTest : public IOTestFixture<DogTreats> {};

TEST_F(DogTreatsTest, SimpleCase) { RunTest("3\n1\n0", "sad"); }

TEST_F(DogTreatsTest, SimpleCase2) { RunTest("3\n2\n1", "happy"); }
