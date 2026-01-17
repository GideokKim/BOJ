#include "32000/src/32860_supernova.h"

#include "test_headers/test_helper.h"

class SupernovaTest : public IOTestFixture<Supernova> {};

TEST_F(SupernovaTest, SimpleCase) { RunTest("2014 10", "SN 2014J"); }

TEST_F(SupernovaTest, SimpleCase2) { RunTest("2011 161", "SN 2011fe"); }

TEST_F(SupernovaTest, SimpleCase3) { RunTest("1 1", "SN 1A"); }

TEST_F(SupernovaTest, SimpleCase4) { RunTest("1 52", "SN 1az"); }

TEST_F(SupernovaTest, SimpleCase5) { RunTest("1 27", "SN 1aa"); }