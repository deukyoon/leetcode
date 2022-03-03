class Solution 
{

    public:
    string restoreString(string s, vector<int>& indices) 
    {
        string result = s;
            
        for (int a = 0; a < indices.size(); a++)
            result[indices[a]] = s[a];
            
        return result;
    }
};
