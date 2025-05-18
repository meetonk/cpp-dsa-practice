/* Problem: Two Sum (https://leetcode.com/problems/two-sum/)
 * Difficulty: Easy
 * Time: O(n), Space: O(n)
 * Thought Process: Using an unordered_map since we want to be able to quickly
 * check if a number is in a list of integers and the index it is at. 
 * map[nums[i]] = i; instead of .insert() because we want to be able to 
 * override the value of a key if the same integer appears multiple times.
 */ 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); i++) {
            numMap[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int check = target - nums[i];
            if (numMap.count(check) && numMap[check] != i) {
                return {i, numMap[check]};
            }
        }
        return {};
    }
};
