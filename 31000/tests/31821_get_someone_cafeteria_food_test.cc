#include "31000/src/31821_get_someone_cafeteria_food.h"

#include "test_headers/test_helper.h"

class GetSomeoneCafeteriaFoodTest : public IOTestFixture<GetSomeoneCafeteriaFood> {};

TEST_F(GetSomeoneCafeteriaFoodTest, SimpleCase) {
  RunTest(
      "3\n"
      "3500\n"
      "4600\n"
      "4900\n"
      "2\n"
      "1\n"
      "3",
      "8400");
}
