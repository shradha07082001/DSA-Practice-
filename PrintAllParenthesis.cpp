class Solution
{
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        vector<string> t;
        if(n==1)
        {
            t.push_back("()");
            return t;
        }
        if(n==2)
        {
            t.push_back("(())");
            t.push_back("()()");
            return t;
        }
        t=AllParenthesis(n-1);
        for(int i=0;i<t.size();i++)
        {
            string buf="(";
            string bug="(";
            string bus="(";
            buf+=t[i]+")";
            bug+=")"+t[i];
            bus=t[i]+bus+")";
            ans.push_back(buf);
            ans.push_back(bug);
            ans.push_back(bus);
        }
        ans.pop_back();
        return ans;
    }
};
