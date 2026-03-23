#include "28000/src/28113_transportation.h"

#include "test_headers/test_helper.h"

class TransportationTest : public IOTestFixture<Transportation> {};

TEST_F(TransportationTest, SampleCase1) { RunTest("10 5 15", "Bus"); }

TEST_F(TransportationTest, SampleCase2) { RunTest("1 1 1", "Anything"); }

TEST_F(TransportationTest, SampleCase3) { RunTest("1 100 1", "Subway"); }
