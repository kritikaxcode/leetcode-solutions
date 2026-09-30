// ==========================================================
// 347. Top K Frequent Elements
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 1 ms (Beats 66%)
// Memory     : 20 MB (Beats 18%)
// Link       : https://leetcode.com/problems/top-k-frequent-elements/
// ==========================================================

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;

        for(int num : nums){
            map[num]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto p : map){
            int number = p.first;
            int frequency = p.second;

            bucket[frequency].push_back(number);


        }
        vector<int>result;
        
        for (int i = bucket.size()-1; i >=0 ; i--){
            for(int number : bucket[i]){

                result.push_back(number);

                if (result.size()==k){
                    return result;
                }
            }
        }   
        return result;
         }
};