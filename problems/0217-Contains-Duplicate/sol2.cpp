// ==========================================================
// 217. Contains Duplicate
// Difficulty : Easy
// Language   : C++
// Solution   : #2
// Runtime    : 66 ms (Beats 72%)
// Memory     : 111.3 MB (Beats 46%)
// Link       : https://leetcode.com/problems/contains-duplicate/
// ==========================================================

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int x: nums){
            if (s.find(x) != s.end()){
                return true;
            }
            s.insert (x);
        }
        return false;
    }
};