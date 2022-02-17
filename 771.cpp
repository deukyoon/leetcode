class Solution 
{

public:
    
    int numJewelsInStones(string J, string S) 
    {
        int jewel_cnt = 0;  
        
        for(int i=0;i<J.length();i++)
        {
            char jewels = J[i];
            
            for(int j = 0; j < S.length(); j++)
            {
                if (jewels == S[j])
                { 
                    jewel_cnt++;
                }
            }
        }
        
        return jewel_cnt; 
    }
};
