vector<int> nextPermutation(vector<int> &nums, int n)
{
        n=nums.size()-1;
        int i=n-1;
        
        while(i>=0 && nums[i]>=nums[i+1])
            i--;
        
        if(i<0){
            sort(nums.begin(), nums.end());
            return nums;
        }
        
        int temp=i+1;
        for(int m=i+1;m<=n;m++){
            if(nums[m]>nums[i] && nums[m]< nums[temp])
                temp=m;
        }
        
        swap(nums[i], nums[temp]);
        i++;
        sort(nums.begin()+i, nums.end());
        return nums;
    }