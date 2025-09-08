#include "30000/src/30402_computer_attacked_gamma.h"

#include "test_headers/test_helper.h"

class ComputerAttackedGammaTest : public IOTestFixture<ComputerAttackedGamma> {
};

TEST_F(ComputerAttackedGammaTest, SimpleCase) {
  RunTest(
      "p o o y r y p o y r p r r o p\ny w w y w r w y w p w w w r y\nr w y r w "
      "r w w w y r p w w o\nr p w w w w w y w w o w o r w\ny w w w r o p w o r "
      "r w p p w\ny y w w w o w p o w r p p o o\np w p w p y o p w w w w p y "
      "w\ny w y o w o w o o o w o w w p\ny o w w y w w w r w o p w w p\np w p "
      "y w w o w o r w w p r y\np p w w w w y r w w w y y o w\np w p w w w w o "
      "o p o w p w p\ny p o y w p w w w w w w r w p\np y r w w w w w o w w p o "
      "y w\no r w w y y y w w o o y y r w",
      "chunbae");
}
