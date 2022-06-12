 int findDuplicate(vector<int>& arr) {
        
        for(int i=0;i<arr.size();i++){
            while(arr[i] != i+1){
                int n=arr[i];
                if(arr[n-1]==n){
                    return n;
                    break;
                }
                swap(arr[i],arr[arr[i]-1]);
            }
        }
        return 0;
    }