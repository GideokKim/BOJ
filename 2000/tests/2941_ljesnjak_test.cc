#include "2000/src/2941_ljesnjak.h"

#include "test_headers/test_helper.h"

class LjesnjakTest : public IOTestFixture<Ljesnjak> {};

TEST_F(LjesnjakTest, SampleCase) { RunTest("ljes=njak", "6"); }

TEST_F(LjesnjakTest, SampleCase2) { RunTest("ddz=z=", "3"); }

TEST_F(LjesnjakTest, SampleCase3) { RunTest("nljj", "3"); }

TEST_F(LjesnjakTest, SampleCase4) { RunTest("c=c=", "2"); }

TEST_F(LjesnjakTest, SampleCase7) { RunTest("dz=ak", "3"); }
