    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        if(nums2.size()==0)
            return;
        int i=0,j=0;
        
        while(i<m && j<n){
            if(nums2[j]<nums1[i]){
                swap(nums1[i],nums2[j]);
                sort(nums2.begin(),nums2.end());
            }
            i++;
        }

      
        while(i<n+m){
            nums1[i]=nums2[j];
            j++;
            i++;
            
        }
        
    }