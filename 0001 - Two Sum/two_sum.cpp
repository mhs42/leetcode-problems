// https://leetcode.com/problems/two-sum/description/
// by Muhammad Haris Saad
// https://github.com/mhs42
// https://mhs42.github.io

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 10^4
// -10^9 <= nums[i] <= 10^9
// -10^9 <= target <= 10^9
// Only one valid answer exists.


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < size(nums); ++i)
        {
            vector<int> num_indices = {};               // Initialize an empty vector num_indices
            for (int i = 0; i < size(nums); ++i)        // For each i as defined,
            {
                for (int j = 0; j < size(nums); ++j)    // For each j as defined,
                {
                    if (i == j)                         // If the same index is accessed by both i and j,
                    {
                        continue;                       // Skip the rest of the for loop
                    }
                    if (nums[i] + nums[j] == target)    // If for any two ith and jth values, their sum is equal to target,
                    {
                        num_indices = {i, j};           // Set num_indices to {i, j}
                        return num_indices;             // Return num_indices
                    }
                }
            }
            return num_indices;                         // Return num_indices
        }
        return {-1, -1};
    }
};
