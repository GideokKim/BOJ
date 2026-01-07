#include "34000/src/34945_too_much_chapel.h"

#include "test_headers/test_helper.h"

class TooMuchChapelTest : public IOTestFixture<TooMuchChapel> {};

TEST_F(TooMuchChapelTest, SampleCase) { RunTest("5", "Oh My God!"); }

TEST_F(TooMuchChapelTest, SampleCase2) { RunTest("6", "Success!"); }
