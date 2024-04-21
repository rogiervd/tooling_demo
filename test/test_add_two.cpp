#include "compute/add_two.hpp"

#include <gtest/gtest.h>

TEST(AddTwo, Fifty) {
    compute::AddTwo add_two;
    EXPECT_EQ(add_two(50), 5210);
}