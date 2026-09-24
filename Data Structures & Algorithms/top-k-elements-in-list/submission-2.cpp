class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>count;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        vector<pair<int,int>>arr;
        for(const auto&p:count){
            arr.push_back({p.second,p.first});
        }
        sort(arr.begin(),arr.end());
        vector<int>res;
        int nn=arr.size();
        for(int i=nn-1;i>=nn-k;i--){
            res.push_back(arr[i].second);
        }
        return res;
    }
};
