#include "sample_add.h"
#include <gtest/gtest.h>

TEST(Easy, Simple) {
    EXPECT_EQ(sample_add(1, 2), 1 + 2);
}
