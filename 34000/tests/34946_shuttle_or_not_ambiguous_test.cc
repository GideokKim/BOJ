#include "34000/src/34946_shuttle_or_not_ambiguous.h"

#include "test_headers/test_helper.h"

class ShuttleOrNotAmbiguousTest : public IOTestFixture<ShuttleOrNotAmbiguous> {
};

TEST_F(ShuttleOrNotAmbiguousTest, SampleCase) { RunTest("5 5 12 12", "~.~"); }

TEST_F(ShuttleOrNotAmbiguousTest, SampleCase2) { RunTest("3 4 5 1", "T.T"); }

TEST_F(ShuttleOrNotAmbiguousTest, SampleCase3) {
  RunTest("4 6 15 10", "Shuttle");
}

TEST_F(ShuttleOrNotAmbiguousTest, SampleCase4) {
  RunTest("10 8 13 16", "Walk");
}
