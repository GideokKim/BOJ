#include "mathematics/data_structure/src/big_int.h"

#include <gtest/gtest.h>

namespace boj::mathematics::data_structure {

TEST(BigIntTest, Addition) {
  BigInt a("12345678901234567890");
  BigInt b("98765432109876543210");
  BigInt expected("111111111011111111100");

  BigInt result = a + b;

  EXPECT_EQ(result.ToString(), expected.ToString());
}

TEST(BigIntTest, Addition2) {
  BigInt a("-999999999");
  BigInt b("1000000000");
  BigInt expected("1");

  BigInt result = a + b;

  EXPECT_EQ(result.ToString(), expected.ToString());
}

TEST(BigIntTest, Subtraction) {
  BigInt a("12345678901234567890");
  BigInt b("98765432109876543210");
  BigInt expected("-86419753208641975320");

  BigInt result = a - b;

  EXPECT_EQ(result.ToString(), expected.ToString());
}

TEST(BigIntTest, Subtraction2) {
  BigInt a("-999999999");
  BigInt b("1000000000");
  BigInt expected("-1999999999");

  BigInt result = a - b;

  EXPECT_EQ(result.ToString(), expected.ToString());
}

TEST(BigIntTest, Subtraction3) {
  BigInt a("1000000000");
  BigInt b("-999999999");
  BigInt expected("1999999999");

  BigInt result = a - b;

  EXPECT_EQ(result.ToString(), expected.ToString());
}

// TEST(BigIntTest, Multiplication) {
//   BigInt a("12345678901234567890");
//   BigInt b("98765432109876543210");
//   BigInt expected("1219326311370217952237463801111263526900");

//   BigInt result = a * b;

//   EXPECT_EQ(result.ToString(), expected.ToString());
// }

}  // namespace boj::mathematics::data_structure

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
