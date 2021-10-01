class Solution {
public:
    int solve(vector<int>& nums, int op) {
        int n = nums.size();
        if(n <= 1)
            return nums[n - 1];
        if(n == 2)
            return max(nums[0],nums[1]);
        int t[n];
        t[0] = nums[0];
        t[1] = max(nums[0],nums[1]);
        for(int i = 2 ; i < n-1 ;i++) {
                t[i] = max(t[i - 1], nums[i] + t[i - 2]);
        }
        int p[n];
        p[1] = nums[1];
        p[2] = max(nums[2],nums[1]);
        for(int i = 3 ; i < n ;i++) {
                p[i] = max(p[i - 1], nums[i] + p[i - 2]);
        }
        return max(p[n-1],t[n-2]);
        
    }
    int rob(vector<int>& nums) {
        return solve(nums,0);
        
    }
    
};  