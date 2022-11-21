#include <gtest/gtest.h>
#include "lib.h"

TEST(hello_world_test, hello_world)
{
    EXPECT_EQ(1, 1);
}

TEST(hello_world_test, add)
{
    EXPECT_EQ(add(1, 2), 3);
}

TEST(hello_world_test, minus)
{
    EXPECT_EQ(minus(1, 2), -1);
}

TEST(hello_world_test, say_hello)
{
    ::testing::internal::CaptureStdout();
    sayHello();
    std::string output = ::testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Hello World!");
}