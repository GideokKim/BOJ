#include "10000/src/10798_vertical_reading.h"

#include "test_headers/test_helper.h"

class VerticalReadingTest : public IOTestFixture<VerticalReading> {};

TEST_F(VerticalReadingTest, SampleCase) {
  RunTest("ABCDE\nabcde\n01234\nFGHIJ\nfghij", "Aa0FfBb1GgCc2HhDd3IiEe4Jj");
}

TEST_F(VerticalReadingTest, SampleCase2) {
  RunTest("AABCDD\nafzz\n09121\na8EWg6\nP5h3kx", "Aa0aPAf985Bz1EhCz2W3D1gkD6x");
}
