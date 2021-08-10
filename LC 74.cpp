class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int startRow=0;
        int startCol=0;
        int endRow=matrix.size();
        int endCol= matrix[0].size()-1;
        
        while(startRow<endRow and endCol>=0)
        {
            if(matrix[startRow][endCol]==target)
                return true;
            else if(matrix[startRow][endCol]>target)
                endCol--;
            else
                startRow++;
        }
        
        return false;
    }
};
