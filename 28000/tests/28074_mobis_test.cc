#include "28000/src/28074_mobis.h"

#include "test_headers/test_helper.h"

class MobisTest : public IOTestFixture<Mobis> {};

TEST_F(MobisTest, SampleCase) { RunTest("MOIISB", "YES"); }

TEST_F(MobisTest, SampleCase2) { RunTest("MOBI", "NO"); }

TEST_F(MobisTest, SampleCase3) { RunTest("INHACTP", "NO"); }
