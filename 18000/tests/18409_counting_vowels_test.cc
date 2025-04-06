#include "18000/src/18409_counting_vowels.h"

#include "test_headers/test_helper.h"

class CountingVowelsTest : public IOTestFixture<CountingVowels> {};

TEST_F(CountingVowelsTest, SimpleCase) { RunTest("8\njoiyosen", "4"); }

TEST_F(CountingVowelsTest, SimpleCase2) { RunTest("6\nbitaro", "3"); }
