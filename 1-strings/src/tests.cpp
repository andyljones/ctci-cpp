#include <iostream>

#include "gtest/gtest.h"
#include "sample.h"

TEST(sample_test_case, sample_test)
{
    EXPECT_EQ(1, returnOne());
}
