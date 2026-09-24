class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int>vec;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                vec.push_back(nums[i]);
            }
        }
        for(int i=0;i<vec.size();i++){
            nums[i]=vec[i];
        }
        return vec.size();
    }
};