#include "32000/src/32215_codemaster_2024.h"

#include "test_headers/test_helper.h"

class Codemaster2024Test : public IOTestFixture<Codemaster2024> {};

TEST_F(Codemaster2024Test, SimpleCase) { RunTest("40 4 24", "100"); }
