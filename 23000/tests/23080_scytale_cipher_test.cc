#include "23000/src/23080_scytale_cipher.h"

#include "test_headers/test_helper.h"

class ScytaleCipherTest : public IOTestFixture<ScytaleCipher> {};

TEST_F(ScytaleCipherTest, SampleCase) { RunTest("3\niabucdpefcg", "iupc"); }
