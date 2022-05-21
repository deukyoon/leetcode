class Solution 
{

    public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) 
    {
        int M = mat.size(), N = mat[0].size();
        vector<int> ans;
       
        for (int s = 0; s <= N + M - 2; s++) 
        {
            if (s % 2) 
            {
                
                for (int r = max(0, s - N + 1) , c = s - r; r < M && 0 <= c; r++, c--) 
                {
                    ans.push_back(mat[r][c]);
                }
                
            } 
            
            else 
            {
                
                for (int r = min(s, M - 1), c = s - r; 0 <= r && c < N; r--, c++) 
                {
                    ans.push_back(mat[r][c]);
                }
                
            }
        }
        
         return ans;
    }
};
