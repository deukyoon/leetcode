class Solution 
{

    public:
    vector<string> cellsInRange(string s) 
    {
    
        vector<string> result;
    
        for (char c = s[0]; c <= s[3]; ++c)
            
        for (char r = s[1]; r <= s[4]; ++r)
            
            result.push_back({c, r});
        
        return result;
    }
};
