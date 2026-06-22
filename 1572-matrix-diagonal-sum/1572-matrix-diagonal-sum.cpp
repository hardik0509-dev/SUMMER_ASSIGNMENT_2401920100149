class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        int sum=0;
        int column=mat[0].size();
        for(int i=0;i<row;i++){
            sum+=mat[i][i];
            if(i!=column-i-1){
            sum+=mat[i][column-i-1];
            }
            
                
            

        }
        return sum;
        
        
    }
};