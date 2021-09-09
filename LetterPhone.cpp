vector<string> sol;  //stores final solution
vector <string> temp;  //stores keypad


void func(string A, int i, string ans){  
    
    int n = A.length();
    if(i == n) {
        sol.push_back(ans);
        return;
    }
    
    
    int digit = A[i]-'0';
    for(int j=0; j<temp[digit].length(); j++){
        
        ans.push_back(temp[digit][j]);
        func(A,i+1,ans);
        ans.erase(i);
    }
}

vector<string> Solution::letterCombinations(string A) {
    temp.push_back("0");
    temp.push_back("1");
    temp.push_back("abc");
    temp.push_back("def");
    temp.push_back("ghi");
    temp.push_back("jkl");
    temp.push_back("mno");
    temp.push_back("pqrs");
    temp.push_back("tuv");
    temp.push_back("wxyz");
    sol.clear();
    string ans;
    func(A,0,ans);
    return sol;
}
