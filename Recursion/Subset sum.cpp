
     void helper(vector<int>& nums, int sum, int index,int n, vector<int>&ans){
        
            if(index>=n){
                ans.push_back(sum);
                return ;
            }
           
            helper(nums, sum+nums[index], index+1, n, ans);
            helper(nums, sum, index+1, n, ans);
    }

vector<int> subsetSum(vector<int> &arr)
{
         vector<int>ans;
          int n=arr.size();
            helper(arr, 0,0,n, ans);
            sort(ans.begin(), ans.end());
            return ans;
            

   }
    
    