// ==========================================================
// 167. Two Sum II - Input Array Is Sorted
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 0 ms (Beats 100%)
// Memory     : 25.7 MB (Beats 8%)
// Link       : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// ==========================================================

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        int l =0 ;
        int r = n-1;

        while(l<r){
            int sum = numbers[l]+numbers[r];
            if(sum==target){
               return {l+1, r+1};
            }
            else if (sum<target){
                l++;
            }
            else if (sum>target){
                r--;
            }
        }
         return {};
    }
   
};