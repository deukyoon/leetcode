class Solution 
{

    public:
    string sortSentence(string s, string s1="") 
    {
        vector<string>res(10);
        
        for(int i=0; i < s.size(); i++)
        {
            if(!isdigit(s[i])) s1+=s[i];
            
            else res[s[i]-'0']= s1+" ", s1="", i++;
        }
        
        for(auto i:res) s1+=i;
        
        s1.pop_back();
        
        return s1;
    }
};
