// https://leetcode.com/problems/maximum-ice-cream-bars/description/
// by Muhammad Haris Saad
// https://github.com/mhs42
// https://mhs42.github.io

// It is a sweltering summer day, and a boy wants to buy some ice cream bars.

// At the store, there are n ice cream bars. You are given an array costs of length n, where costs[i] is the price of the ith ice cream bar in coins. The boy initially has coins coins to spend, and he wants to buy as many ice cream bars as possible. 

// Note: The boy can buy the ice cream bars in any order.

// Return the maximum number of ice cream bars the boy can buy with coins coins.

// You must solve the problem by counting sort.

 

// Example 1:

// Input: costs = [1,3,2,4,1], coins = 7
// Output: 4
// Explanation: The boy can buy ice cream bars at indices 0,1,2,4 for a total price of 1 + 3 + 2 + 1 = 7.
// Example 2:

// Input: costs = [10,6,8,7,7,8], coins = 5
// Output: 0
// Explanation: The boy cannot afford any of the ice cream bars.
// Example 3:

// Input: costs = [1,6,3,1,2,5], coins = 20
// Output: 6
// Explanation: The boy can buy all the ice cream bars for a total price of 1 + 6 + 3 + 1 + 2 + 5 = 18.
 

// Constraints:

// costs.length == n
// 1 <= n <= 10^5
// 1 <= costs[i] <= 10^5
// 1 <= coins <= 10^8


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count = 0;                          // Initialize count as 0
        sort(costs.begin(), costs.end());       // Sort costs in ascending order
        for (int i = 0; i < size(costs); ++i)   // For each i as defined,
        {
            if (costs[i] > coins)               // If the ith value in costs is greater than coins,
            {
                return count;                   // Return count
            }
            else if (costs[i] == coins)         // Else if the ith value in costs is equal to coins,
            {
                coins = 0;                      // Set coins to 0
                ++count;                        // Increment count by 1
                return count;                   // Return count
            }
            else                                // Else,
            {
                coins -= costs[i];              // Subtract the ith value in costs from coins
                ++count;                        // Increment count by 1
            }
        }
        return count;                           // Return count
    }
};
