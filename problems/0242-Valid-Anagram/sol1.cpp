// ==========================================================
// 242. Valid Anagram
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 3 ms (Beats 45%)
// Memory     : 9.8 MB (Beats 25%)
// Link       : https://leetcode.com/problems/valid-anagram/
// ==========================================================

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> countS;
        unordered_map<char,int>countT;

        for (int i = 0;i<s.length();i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }

        for(auto c: countS){
            if (c.second != countT[c.first]){
                return false;
            }
        }
        return true ;

    }
};