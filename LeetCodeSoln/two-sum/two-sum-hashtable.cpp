class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];
            if (table.find(complement) != table.end()) {
                return {i, table[complement]};
            }
            table[nums[i]] = i;
        }

        return {};
    }
};
