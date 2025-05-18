/* Problem: Valid Anagram (https://leetcode.com/problems/valid-anagram/)
 * Difficulty: Easy
 * Time: O(n + m), Space: O(1)
 * Thought Process: Using an unordered_map since we want to be able to
 * quickly compare the number of times a character appears between two
 * strings. Unordered_map instead of unordered_set because we want to
 * compare the number of times each character appears, so we need to
 * track both the character and times it appears (need key and value).
 */ 

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<int, int> CountS;
        unordered_map<int, int> CountT;

        for (int i = 0; i < s.length(); i++) {
            CountS[s[i]]++;
            CountT[t[i]]++;
        }
        return CountS == CountT;
    }
};
