#include "23000/src/23627_driip.h"

#include "test_headers/test_helper.h"

class DriipTest : public IOTestFixture<Driip> {};

TEST_F(DriipTest, SimpleCase) { RunTest("dogdriip", "cute"); }

TEST_F(DriipTest, SimpleCase2) { RunTest("goricon", "not cute"); }

TEST_F(DriipTest, SimpleCase3) { RunTest("h", "not cute"); }
