#include "23000/src/23825_lets_make_sasa.h"

#include "test_headers/test_helper.h"

class LetMakeSasaTest : public IOTestFixture<LetMakeSasa> {};

TEST_F(LetMakeSasaTest, SimpleCase) { RunTest("4 5", "2"); }
