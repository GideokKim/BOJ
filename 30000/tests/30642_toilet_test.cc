#include "30000/src/30642_toilet.h"

#include "test_headers/test_helper.h"

class ToiletTest : public IOTestFixture<Toilet> {};

TEST_F(ToiletTest, SampleCase) { RunTest("5\nannyong\n4", "3"); }

TEST_F(ToiletTest, SampleCase2) { RunTest("20\ninduck\n8", "8"); }
