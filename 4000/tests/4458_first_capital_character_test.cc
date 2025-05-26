#include "4000/src/4458_first_capital_character.h"

#include "test_headers/test_helper.h"

class FirstCapitalCharacterTest : public IOTestFixture<FirstCapitalCharacter> {
};

TEST_F(FirstCapitalCharacterTest, SampleCase) {
  RunTest(
      "5\n"
      "powdered Toast Man\n"
      "skeletor\n"
      "Electra Woman and Dyna Girl\n"
      "she-Ra Princess of Power\n"
      "darth Vader",
      "Powdered Toast Man\n"
      "Skeletor\n"
      "Electra Woman and Dyna Girl\n"
      "She-Ra Princess of Power\n"
      "Darth Vader\n");
}
