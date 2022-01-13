#include <gtest/gtest.h>

#include "./two-sum.hpp"

// Demonstrate some basic assertions.
TEST(TwoSumTest, BasicAssertions)
{
    Solution sol;
    // Expect two strings not to be equal.
    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = {3, 1};
    EXPECT_EQ(sol.twoSum(nums, 6), res);

    nums.clear();
    for (int i=1; i<=10000; i++) {
        nums.push_back(i);
    }
    res = {9999, 9998};
    EXPECT_EQ(sol.twoSum(nums, 19999), res);
}