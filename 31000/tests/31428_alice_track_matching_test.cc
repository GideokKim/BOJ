#include "31000/src/31428_alice_track_matching.h"

#include "test_headers/test_helper.h"

class AliceTrackMatchingTest : public IOTestFixture<AliceTrackMatching> {};

TEST_F(AliceTrackMatchingTest, SampleCase) { RunTest("1\nC\nA", "0"); }

TEST_F(AliceTrackMatchingTest, SampleCase2) { RunTest("5\nI A I S S\nS", "2"); }
