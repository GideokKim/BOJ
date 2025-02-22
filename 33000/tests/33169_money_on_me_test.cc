#include "33000/src/33169_money_on_me.h"

#include "test_headers/test_helper.h"

class MoneyOnMeTest : public IOTestFixture<MoneyOnMe> {};

TEST_F(MoneyOnMeTest, SampleCase) { RunTest("11\n1", "21000"); }

TEST_F(MoneyOnMeTest, SampleCase2) { RunTest("7\n2", "27000"); }
