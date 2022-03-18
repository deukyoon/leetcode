class Solution 
{

    public:
    int maxDepth(string s) 
    {
        int result = 0, depth = 0;
        
        for(int i=0; i < s.size(); ++i)
        {
            if(s[i] == '(')
                ++depth;
            
            else if(s[i] == ')')
                --depth;
            
            result = max(depth, result);
        }
    
        return result;
    }
};
