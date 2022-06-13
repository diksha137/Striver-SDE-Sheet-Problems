 bool search (vector<vector<int>>& matrix, int row, int col, int target){
        int start=0, end=col-1;
        
        while(start<=end){
            
            int mid=(start+end)/2;
            int var=matrix[row][mid];
            if(var==target)
                return true;
            
            if(target< var)
                end=mid-1;
            else
                start=mid+1;
            
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size()-1, col=matrix[0].size()-1;
        for(int i=0;i<=row;i++){
            if(target == matrix[i][0] || target==matrix[i][col])
                return true;
            else if(target >matrix[i][0] && target<matrix[i][col])
                return search(matrix,i, col, target);
            
            
        }
        
        //TC=O(M)+O(LOGN);
    return false;
    }