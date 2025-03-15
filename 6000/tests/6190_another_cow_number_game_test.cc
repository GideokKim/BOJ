#include "6000/src/6190_another_cow_number_game.h"

#include "test_headers/test_helper.h"

class AnotherCowNumberGameTest : public IOTestFixture<AnotherCowNumberGame> {};

TEST_F(AnotherCowNumberGameTest, SampleCase) { RunTest("112", "20"); }

TEST_F(AnotherCowNumberGameTest, SampleCase2) { RunTest("1", "0"); }
