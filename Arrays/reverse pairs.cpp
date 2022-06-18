#include <bits/stdc++.h> 
typedef long long ll;
ll count_=0;

void merge(ll*nums, int start, int mid, int end){
    int j=mid+1;
  
    for(int i=start;i<=mid;i++){
        while(j<=end && nums[i]>nums[j])
            j++;
        count_+=(j-(mid+1));
        
    }

    int s1=start, s2=mid+1;
    vector<ll> temp;
    while(s1<=mid && s2<=end){
        
        if(nums[s1]<nums[s2]){
            temp.push_back(nums[s1]);
            s1++;
        }
        else{
            temp.push_back(nums[s2]);
            s2++;
       }
    }
    
    while(s1<=mid){
        temp.push_back(nums[s1]);
        s1++;
    }
    
    while(s2<=end){
        temp.push_back(nums[s2]);
        s2++;
    }
    int i=0,n=temp.size();
    s1=start;
    while(i<n){
        nums[s1]=temp[i];
        i++;
        s1++;
    }
    
//     for(int i=start;i<=end;i++)
//         cout<<nums[i];
//     cout<<endl;
    
}
void divide(ll *arr, int start, int end){
    if(start>=end)
        return ;
    
    int mid=(start+end)/2;
    divide(arr, start, mid);
    divide(arr, mid+1, end);
    merge(arr, start, mid, end);
  
}


long long getInversions(long long *arr, int n){
    
    
       divide(arr, 0,n-1);
    
        return count_;
    
}

