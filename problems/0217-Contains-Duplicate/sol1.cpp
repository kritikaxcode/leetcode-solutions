// ==========================================================
// 217. Contains Duplicate
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 75 ms (Beats 44%)
// Memory     : 111.1 MB (Beats 74%)
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