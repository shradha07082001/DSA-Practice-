vector<vector<string> > res;
 
bool check(vector<string> &temp, int row, int col, int A)
{
    for(int i=0;i<row;i++)
        if(temp[i][col]=='Q')
            return false;
 
    for(int i=row, j=col; i>=0 && j>=0;i--, j--)
        if(temp[i][j]=='Q')
            return false;
 
    for(int i=row, j=col; i>=0 && j<A;i--, j++)
        if(temp[i][j]=='Q')
            return false;
 
    return true;
}
 
void getNQueen(int A, int row, vector<string> &temp)
{
    if(row == A)
    {
        res.push_back(temp);
        return;
    }
 
    for(int col=0;col<A;col++)
    {
        if(check(temp, row, col, A))
        {
            temp[row][col] = 'Q';
            getNQueen(A, row+1, temp);
            temp[row][col] = '.';
        }
    }
}
 
vector<vector<string> > Solution::solveNQueens(int A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    res.clear();
 
    if(A==2 || A==3)
        return res;
 
    string s(A,'.');
 
    vector<string> temp(A,s);
 
    getNQueen(A, 0, temp);
 
    return res;
}
