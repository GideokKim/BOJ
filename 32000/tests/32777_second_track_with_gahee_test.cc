#include "32000/src/32777_second_track_with_gahee.h"
#include "test_headers/test_helper.h"

class SecondTrackWithGaheeTest : public IOTestFixture<SecondTrackWithGahee> {};

TEST_F(SecondTrackWithGaheeTest, SimpleCase) {
  RunTest("2\n201 202\n202 201", "Inner circle line\nOuter circle line\n");
}

TEST_F(SecondTrackWithGaheeTest, SimpleCase2) {
  RunTest("2\n216 228\n228 216", "Inner circle line\nOuter circle line\n");
}