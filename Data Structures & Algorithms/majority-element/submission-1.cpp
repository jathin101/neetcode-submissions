class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if (n==1)return nums[0];
        for (int i=0;i<n;i++){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(nums[j]==nums[i]){
                    count++;
                }
                if(count>n/2){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};