/* Problem: Two Sum (https://leetcode.com/problems/contains-duplicate/)
 * Difficulty: Easy
 * Time: O(n), Space: O(n)
 * Thought Process: Using an ordered_set since we want to be able to quickly
 * check if there is already a value in a list of elements or not
 * Unordered_set instead of unordered_map because we don't care about the
 * number of times we have an element, only if it exists already or not.
 */ 

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dupNum;
        for (int num : nums) {
            if (dupNum.count(num)) {
                return true;
            }
            dupNum.insert(num);
        }
        return false;
    }
};
