int maxProfit(vector<int>& arr) {
      
        int ans=0,n=arr.size();
        int max_index=arr[n-1];
        for(int i=n-1;i>=0;i--){
            max_index=max(max_index, arr[i]);
            ans=max(ans, max_index-arr[i]);
        }
        return ans;
        
    }