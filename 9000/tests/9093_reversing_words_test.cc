#include "9000/src/9093_reversing_words.h"

#include "test_headers/test_helper.h"

class ReversingWordsTest : public IOTestFixture<ReversingWords> {};

TEST_F(ReversingWordsTest, SampleCase) {
  RunTest("2\nI am happy today\nWe want to win the first prize",
          "I ma yppah yadot \neW tnaw ot niw eht tsrif ezirp \n");
}