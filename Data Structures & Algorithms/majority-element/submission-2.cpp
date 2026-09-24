class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for (auto it:mp){
            if(it.second>nums.size()/2){
                return it.first;
            }
        }
    }
};