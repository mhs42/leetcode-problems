// https://leetcode.com/problems/palindromic-substrings/description/
// by Muhammad Haris Saad
// https://github.com/mhs42
// https://mhs42.github.io

// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

 

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 

// Constraints:

// 1 <= s.length <= 1000
// s consists of lowercase English letters.


#include <iostream>

using namespace std;

class Solution {
public:
    string reverseString(string str)
    {
        int len = str.length();                     // Get length of str
        int n = len - 1;                            // Initialize n
        int i = 0;                                  // and i for the while loop
        while(i <= n)                               // Traverse through each index
        {
            swap(str[i], str[n]);                   // Swap the values at index i and n
            --n;                                    // Decrement n by 1
            ++i;                                    // Increment i by 1
        }
        return str;                                 // Return the reversed str
    }

    int countSubstrings(string s) {
        int palindromes = 0;                        // Initialize palindromes as 0
        string curr_str = "";                       // and curr_str as empty string
        for (int i = 0; i < s.length(); ++i)        // For each i as defined,
        {
            for (int j = i; j < s.length(); ++j)    // For each j as defined,
            {
                curr_str += s[j];                   // Add the current jth char to curr_str
                if (i == j)                         // If the same index is accessed by both i and j,
                {
                    ++palindromes;                  // Increment palindromes by 1 (because each separate char counts as a palindrome as well)
                    continue;                       // And skip the rest of the for loop
                }
                else                                // Else,
                {
                    if (curr_str == reverseString(curr_str))    // If curr_str is the same as its reverse,
                    {
                        ++palindromes;              // Increment palindromes by 1
                    }
                }
            }
            curr_str = "";                          // Reinitialize curr_str to empty string
        }
        return palindromes;                         // Return the number of palindromes in s
    }
};
