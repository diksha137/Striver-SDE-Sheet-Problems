class Solution {
public:
    
     double ans;

    double myPow(double x, int n) {
        
        long long m=n;
        if(n<0){
            return 1/helper(x, (-m));
            
        }
        
        return helper(x,n);
    }
    
    double helper(double x, long long n){
        if(n==0)
            return 1;
        if(n%2==0)
            return helper(x*x, n/2);
        else
            return x*helper(x, n-1);
    }
    
};
