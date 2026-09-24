class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        int n=nums.size();
        for(int i=0;i<n;i++){
            // if(!seen.contains(nums[i]))
            if(seen.find(nums[i])==seen.end()){
                seen.insert(nums[i]);
            }else{
                return true;
            }
        }
        return false;
    }
};