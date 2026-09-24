class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        // Reverse first n-k elements
        int i = 0, j = n-k-1;
        while (i <= j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }

        // Reverse last k elements
        i = n-k;
        j = n-1;
        while (i <= j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }

        // Reverse entire array
        i = 0;
        j = n-1;
        while (i <= j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};