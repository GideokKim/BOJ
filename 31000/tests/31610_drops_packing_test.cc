#include "31000/src/31610_drops_packing.h"

#include "test_headers/test_helper.h"

class DropsPackingTest : public IOTestFixture<DropsPacking> {};

TEST_F(DropsPackingTest, SampleCase) { RunTest("20\n3\n10", "70"); }

TEST_F(DropsPackingTest, SampleCase2) { RunTest("70\n2\n100", "240"); }

TEST_F(DropsPackingTest, SampleCase3) { RunTest("23\n10\n15", "245"); }

TEST_F(DropsPackingTest, SampleCase4) { RunTest("100\n100\n100", "10100"); }