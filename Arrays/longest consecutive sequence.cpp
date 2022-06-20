class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            
        set<int> s;
        int n=nums.size();
        
        if(nums.size()==0)
            return 0;
        for(int i=0;i<n;i++)
            s.insert(nums[i]);
            
        int ans=1;
        for(int i=0;i<n;i++){
                int num=nums[i];
                
                if(s.find(num-1)==s.end()){
                    int count=0;
                    while(s.find(num)!=s.end()){
                        count++;
                        num++;

                    }
                    
                    ans=max(count,ans);
                }
            
        }
        return ans;

    }
};