class Solution {
public:
    int romanToInt(string s) 
    {
        unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        int ans = m[s[s.length() - 1]];
        
        for(int i = s.length() - 2; i >= 0; i--){
            char c = s[i];
            char ch = s[i+1];
            
            if(m[c] < m[ch]){
                ans -= m[c];
            }else{
                ans += m[c];
            }
        }
        return ans;
    }
};
