class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;

        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int st = 0;
        int ed = arr.size() - 1;

        while (st < ed) {

            int sum = arr[st].first + arr[ed].first;

            if (sum > target) {
                ed--;
            }
            else if (sum < target) {
                st++;
            }
            else {
                return {arr[st].second, arr[ed].second};
            }
        }
        return {arr[st].second, arr[ed].second};

        
    } 
};