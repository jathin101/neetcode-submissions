class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return n;
        }

        int i=0,j=1;
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }else{
                i=i+1;
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return i+1;
    }
};