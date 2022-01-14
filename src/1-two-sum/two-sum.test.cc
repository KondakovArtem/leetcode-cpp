#include <gtest/gtest.h>

#include "./two-sum.hpp"

// Demonstrate some basic assertions.
TEST(TwoSumTest, BasicAssertions) {
  Solution sol;
  // Expect two strings not to be equal.

  vector<int> res = {1, 3};
  vector<int> nums = {1, 2, 3, 4};
  EXPECT_EQ(sol.twoSum(nums, 6), res);

  nums = {};
  for (int i = 1; i <= 10000; i++) {
    nums.push_back(i);
  }
  res = {9998, 9999};
  EXPECT_EQ(sol.twoSum(nums, 19999), res);
}