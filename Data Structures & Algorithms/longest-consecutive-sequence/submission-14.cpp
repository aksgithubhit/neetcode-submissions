

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;

        // Store each number as a key
        for (int num : nums) {
            mp[num] = 1;
        }

        int longest = 0;

        for (int num : nums) {

            // Only start counting if the previous number is absent
            if (mp.find(num - 1) == mp.end()) {
                int current = num;
                int length = 1;

                // Count consecutive numbers
                while (mp.find(current + 1) != mp.end()) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    

    }
};
