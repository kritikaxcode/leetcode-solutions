// ==========================================================
// 283. Move Zeroes
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 23.9 MB (Beats 19%)
// Link       : https://leetcode.com/problems/move-zeroes/
// ==========================================================

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int start = 0;

        for (int i=0; i<n; i++){
            if(nums[i]!=0){
                swap(nums[start], nums[i]);
                start +=1;
            }
        }
    }
};