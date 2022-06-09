void sortColors(vector<int>& arr) {
        int l=0,m=0,h=arr.size()-1;
        
        while(m<=h){    //O(N)
            if(arr[m]==0){
                swap(arr[m],arr[l]);
                l++;
                m++;
            }
            
            else if(arr[m]==2){
                swap(arr[h], arr[m]);
                h--;
            }
            else
                m++;
        }
        
    }