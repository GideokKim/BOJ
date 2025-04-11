#include "24000/src/24084_next_character.h"

#include "test_headers/test_helper.h"

class NextCharacterTest : public IOTestFixture<NextCharacter> {};

TEST_F(NextCharacterTest, SampleCase) { RunTest("6\nIOJOIJ", "O\nI\n"); }

TEST_F(NextCharacterTest, SampleCase2) { RunTest("4\nJJOI", "J\n"); }

TEST_F(NextCharacterTest, SampleCase3) { RunTest("7\nIOJOJOJ", "O\nO\nO\n"); }

TEST_F(NextCharacterTest, SampleCase4) { RunTest("5\nJJJJJ", "J\nJ\nJ\nJ\n"); }
