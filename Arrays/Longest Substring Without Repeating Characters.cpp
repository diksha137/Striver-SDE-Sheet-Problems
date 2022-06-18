class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
          
        unordered_map<int,int> mp;
        int len=0, j=0,i=0, ans=0, n=s.length();
        while(j<n){
            char c=s[j];
            if(mp.find(c)==mp.end() ){
                mp[c]=j;
            }
            else {
                if(mp[c]>=i)
                    i=mp[c]+1;
                mp[c]=j;
                
            }
            
            ans=max(ans, j-i+1);
             j++;
        }
       
        return ans;
            
    }
};