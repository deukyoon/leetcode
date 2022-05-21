class Solution 
{

    public:
    bool isIsomorphic(string s, string t) 
    {
        return normal(s) == normal(t);
    }
    
    string normal(const string& s) 
    {
        char w[128] = {};
        string ans = "";
        char ch = 'a';
        
        for (char c : s) 
        {
            if (w[c] == 0) 
            {
                w[c] = ch;
                ++ch;
            }
            
            ans += w[c];
        }
        
        return ans;
    }
};
