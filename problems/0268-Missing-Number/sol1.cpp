// ==========================================================
// 268. Missing Number
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 21.8 MB (Beats 71%)
// Link       : https://leetcode.com/problems/missing-number/
// ==========================================================

class Solution {
public:
    int missingNumber(vector<int>& nums) {
         
        int n = nums.size();
        int ans = n;

        for (int i = 0; i < n; i++) {
            ans = ans ^ i ^ nums[i];
        }

        return ans;
    
    }
};