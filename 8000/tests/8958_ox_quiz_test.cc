#include "8000/src/8958_ox_quiz.h"

#include "test_headers/test_helper.h"

class OxQuizTest : public IOTestFixture<OxQuiz> {};

TEST_F(OxQuizTest, SimpleCase) {
  RunTest(
      "5\nOOXXOXXOOO\nOOXXOOXXOO\nOXOXOXOXOXOXOX\nOOOOOOOOOO\nOOOOXOOOOXOOOOX",
      "10\n9\n7\n55\n30\n");
}
