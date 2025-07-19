#include "27000/src/27964_quatro_cheese_pizza.h"

#include "test_headers/test_helper.h"

class QuatroCheesePizzaTest : public IOTestFixture<QuatroCheesePizza> {};

TEST_F(QuatroCheesePizzaTest, SampleCase) {
  RunTest("4\nCheddarCheese MozzarellaCheese GoudaCheese GranaPadanoCheese",
          "yummy");
}

TEST_F(QuatroCheesePizzaTest, SampleCase2) {
  RunTest(
      "4\nMozzarellaCheese MozzarellaCheese MozzarellaCheese MozzarellaCheese",
      "sad");
}

TEST_F(QuatroCheesePizzaTest, SampleCase3) {
  RunTest("4\nCheeseBurger CheeseBall CheeseCake CheeseRavioli", "sad");
}

TEST_F(QuatroCheesePizzaTest, SampleCase4) {
  RunTest("7\nC Chess cheese Cheesa Cheesz Cheesp Cheese", "sad");
}
