#include "32000/src/32369_onion_experiment.h"

#include "test_headers/test_helper.h"

class OnionExperimentTest : public IOTestFixture<OnionExperiment> {};

TEST_F(OnionExperimentTest, SimpleCase) { RunTest("10 3 5", "41 40"); }

TEST_F(OnionExperimentTest, SimpleCase2) { RunTest("1 5 6", "7 6"); }

TEST_F(OnionExperimentTest, SimpleCase3) { RunTest("2 5 6", "12 11"); }
