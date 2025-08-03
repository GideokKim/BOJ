#include "4000/src/4732_scale_translation.h"

#include "test_headers/test_helper.h"

class ScaleTranslationTest : public IOTestFixture<ScaleTranslation> {};

TEST_F(ScaleTranslationTest, SimpleCase) {
  RunTest("C# E Db G#\n1\nD E# D A\n-1\n***", "D F D A \nC# E C# G# \n");
}
