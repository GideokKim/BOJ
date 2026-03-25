#include "31000/src/31775_global_ponix.h"

#include "test_headers/test_helper.h"

class GlobalPonixTest : public IOTestFixture<GlobalPonix> {};

TEST_F(GlobalPonixTest, SampleCase) {
  RunTest("korea\nlegend\npostech", "GLOBAL");
}

TEST_F(GlobalPonixTest, SampleCase2) {
  RunTest("turing\ndijkstra\nneumann", "PONIX");
}

TEST_F(GlobalPonixTest, SampleCase3) {
  RunTest("leo020630\nkwoncycle\npetamingks", "GLOBAL");
}
