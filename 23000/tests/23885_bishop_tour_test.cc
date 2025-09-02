#include "23000/src/23885_bishop_tour.h"

#include "test_headers/test_helper.h"

class BishopTourTest : public IOTestFixture<BishopTour> {};

TEST_F(BishopTourTest, SimpleCase) { RunTest("2 3\n1 1\n1 3", "YES"); }

TEST_F(BishopTourTest, SimpleCase2) { RunTest("2 3\n1 1\n1 2", "NO"); }