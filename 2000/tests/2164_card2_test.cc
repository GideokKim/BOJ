#include "2000/src/2164_card2.h"

#include "test_headers/test_helper.h"

class Card2Test : public IOTestFixture<Card2> {};

TEST_F(Card2Test, SampleCase) { RunTest("6", "4"); }

TEST_F(Card2Test, SampleCase2) { RunTest("500000", "475712"); }
