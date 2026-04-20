#include "35000/src/35370_memories_of_passport_control.h"

#include "test_headers/test_helper.h"

class MemoriesOfPassportControlTest
    : public IOTestFixture<MemoriesOfPassportControl> {};

TEST_F(MemoriesOfPassportControlTest, SampleCase) { RunTest("13 23", "11"); }

TEST_F(MemoriesOfPassportControlTest, SampleCase2) { RunTest("13 39", "3"); }
