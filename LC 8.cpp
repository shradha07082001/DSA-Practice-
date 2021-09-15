class Solution {
public:
    int myAtoi(string s) 
    {
        int i=0;
        long long int num=0;
        int flag=0;
        
        while(s[i]==' ')
            i++;
        
        if(s[i]=='-')
        {
            flag=1;
            i++;
            
        }
        
        else if(s[i]=='+')
            i++;
       
        if(!isdigit(s[i]))        
        {
            return 0;
        }
        
        while(isdigit(s[i]) && i<s.size())     
        {
            if(num>INT_MAX)             
                break;
            num=num*10;
            num=num+ s[i]-'0';
            i++;
        }
        if(flag)            
        {
            if(num>INT_MAX)         
                return INT_MIN;
            num=num*(-1);       
            return num;
        }
        else{
            if(num>INT_MAX)  
                return INT_MAX;
            return num;
        }
    }
};
