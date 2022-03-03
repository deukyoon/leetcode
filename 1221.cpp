class Solution 
{

    public:
    int balancedStringSplit(string s) 
    {
        int a =0;
        int b = 0;
        
        for(char c : s)
        {
            if(c =='R') 
                ++a;
            else if(c =='L') 
                --a;
                
            if(a == 0) ++b;
        }
        return b;
    }
};
