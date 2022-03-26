class Solution 
{

    public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
		int count = 0;
        int allow[26] = {0};
        
        for (char c: allowed)
            allow[c-'a'] = 1;
        
        bool found = true;
		
        for (string str: words) 
        {
            for (char c: str) 
                if (allow[c-'a'] == 0) 
                {
                    found = false;
                    break;
                }
            
                if (found)
                count++;
            
            found = true;
        }
		
        return count;
    }
};
