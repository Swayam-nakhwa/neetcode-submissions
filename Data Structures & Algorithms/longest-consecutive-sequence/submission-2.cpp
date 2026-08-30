#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> numset;

        int longest = 0;

        for (int num : nums) {
            numset.insert(num);
        }

        for (auto num : numset) {

            // Check if num is the starting element
            if (numset.find(num - 1) == numset.end()) {

                int length = 1;

                // Keep checking for the next number
                while (numset.find(num + length) != numset.end()) {
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};