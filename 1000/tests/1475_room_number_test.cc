#include "1000/src/1475_room_number.h"

#include "test_headers/test_helper.h"

class RoomNumberTest : public IOTestFixture<RoomNumber> {};

TEST_F(RoomNumberTest, SampleCase) { RunTest("9999", "2"); }

TEST_F(RoomNumberTest, SampleCase2) { RunTest("122", "2"); }

TEST_F(RoomNumberTest, SampleCase3) { RunTest("12635", "1"); }

TEST_F(RoomNumberTest, SampleCase4) { RunTest("888888", "6"); }
