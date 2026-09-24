class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> res;

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }

            if (count > n / 3) {
                res.insert(nums[i]);
            }
        }

        vector<int> res1;

        for (const auto& x : res) {
            res1.push_back(x);
        }

        return res1;
    }
};