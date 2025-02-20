#include <gtest/gtest.h>

#include "sample_add.h"
#include "sample_sub.hpp"

TEST(Easy, Add) {
    EXPECT_EQ(sample_add(1, 2), 1 + 2);
}

TEST(Easy, Sub) {
    sample::Sub sub;
    EXPECT_EQ(sub(1, 2), 1 - 2);
}
