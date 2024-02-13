// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/
// by Muhammad Haris Saad
// https://github.com/mhs42
// https://mhs42.github.io

// Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

// A string is palindromic if it reads the same forward and backward.

 

// Example 1:

// Input: words = ["abc","car","ada","racecar","cool"]
// Output: "ada"
// Explanation: The first string that is palindromic is "ada".
// Note that "racecar" is also palindromic, but it is not the first.
// Example 2:

// Input: words = ["notapalindrome","racecar"]
// Output: "racecar"
// Explanation: The first and only string that is palindromic is "racecar".
// Example 3:

// Input: words = ["def","ghi"]
// Output: ""
// Explanation: There are no palindromic strings, so the empty string is returned.
 

// Constraints:

// 1 <= words.length <= 100
// 1 <= words[i].length <= 100
// words[i] consists only of lowercase English letters.


#include <iostream>
#include <vector>

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

    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < size(words); ++i)           // For i as defined,
        {
            if (words[i] == reverseString(words[i]))    // If the ith word is equal to its reverse,
            {
                return words[i];                        // Return the ith word
            }
        }
        return "";                                      // If no palindrome found, return ""
    }
};
