#include "30000/src/30821_if_it_can_be_constellation.h"

#include "test_headers/test_helper.h"

class IfItCanBeConstellationTest
    : public IOTestFixture<IfItCanBeConstellation> {};

TEST_F(IfItCanBeConstellationTest, SimpleCase) { RunTest("6", "6"); }

TEST_F(IfItCanBeConstellationTest, SimpleCase2) { RunTest("100", "75287520"); }

TEST_F(IfItCanBeConstellationTest, SimpleCase3) { RunTest("5", "1"); }
