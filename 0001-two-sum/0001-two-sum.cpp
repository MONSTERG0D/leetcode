class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int needed = target - nums[i];

            if (mp.find(needed) != mp.end()) {
                return {mp[needed], i};
            }

            mp[nums[i]] = i;
        }
        return nums;
        

        
    } 
};