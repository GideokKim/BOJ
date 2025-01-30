#include "10000/src/10172_dog.h"

#include "test_headers/test_helper.h"

class DogTest : public IOTestFixture<Dog> {};

TEST_F(DogTest, SimpleCase) {
  RunTest("",
          "|\\_/|\n"
          "|q p|   /}\n"
          "( 0 )\"\"\"\\\n"
          "|\"^\"`    |\n"
          "||_/=\\\\__|");
}
