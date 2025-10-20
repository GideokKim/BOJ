#include "2000/src/2693_nth_largest_number.h"

#include "test_headers/test_helper.h"

class NthLargestNumberTest : public IOTestFixture<NthLargestNumber> {};

TEST_F(NthLargestNumberTest, SampleCase) {
  RunTest(
      "4\n1 2 3 4 5 6 7 8 9 1000\n338 304 619 95 343 496 489 116 98 127\n931 "
      "240 986 894 826 640 965 833 136 138\n940 955 364 188 133 254 501 122 "
      "768 408",
      "8\n489\n931\n768\n");
}
