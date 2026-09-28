// ==========================================================
// 49. Group Anagrams
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 15 ms (Beats 69%)
// Memory     : 26.2 MB (Beats 34%)
// Link       : https://leetcode.com/problems/group-anagrams/
// ==========================================================

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;

        for (string word :strs){ string key = word;
        sort (key.begin(),key.end());
        mp[key].push_back (word);
        }

        vector<vector <string>> result;

        for (auto pair :mp){
            result.push_back(pair.second);
            
        }

        return result;


    }
};