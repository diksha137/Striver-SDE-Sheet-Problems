int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_prev=0, index_max;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            index_max=max(nums[i], max_prev+nums[i]);
            max_prev=index_max;
            ans=max(ans,index_max);
        }
        return ans;
    }