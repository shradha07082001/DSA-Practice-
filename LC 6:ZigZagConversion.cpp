class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        vector<string> ans(numRows,"");
        int j=0;
        int dir=-1;
        for(int i=0;i<s.size();i++,j+=dir)
        {
            if(j==numRows-1||j==0)
                dir=dir*-1;
            ans[j]+= s[i];    
        }
        
        string a = "";
        for(int i=0;i<ans.size();i++)
            a= a+ ans[i];
        return a;
    }
};
