#include "1000/src/1157_word_study.h"

#include "test_headers/test_helper.h"

class WordStudyTest : public IOTestFixture<WordStudy> {};

TEST_F(WordStudyTest, SampleCase) { RunTest("Mississipi", "?"); }

TEST_F(WordStudyTest, SampleCase2) { RunTest("zZa", "Z"); }

TEST_F(WordStudyTest, SampleCase3) { RunTest("z", "Z"); }

TEST_F(WordStudyTest, SampleCase4) { RunTest("baaa", "A"); }
