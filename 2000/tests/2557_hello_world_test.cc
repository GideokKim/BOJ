#include "2000/src/2557_hello_world.h"

#include <gtest/gtest.h>

TEST(HelloWorldTest, SampleCase) {
  HelloWorld hello_world;

  EXPECT_EQ(hello_world.GetHelloWorld(), "Hello World!");
}
