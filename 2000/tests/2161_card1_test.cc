#include "2000/src/2161_card1.h"

#include "test_headers/test_helper.h"

class Card1Test : public IOTestFixture<Card1> {};

TEST_F(Card1Test, SampleCase) { RunTest("7", "1 3 5 7 4 2 6 "); }
