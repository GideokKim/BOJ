#include "16000/src/16944_safe_password.h"

#include "test_headers/test_helper.h"

class SafePasswordTest : public IOTestFixture<SafePassword> {};

TEST_F(SafePasswordTest, SampleCase) { RunTest("7\nKoosaga", "2"); }

TEST_F(SafePasswordTest, SampleCase2) { RunTest("7\nkoosaga", "3"); }

TEST_F(SafePasswordTest, SampleCase3) { RunTest("7\nk@@saga", "2"); }

TEST_F(SafePasswordTest, SampleCase4) { RunTest("7\nK0@saga", "0"); }
