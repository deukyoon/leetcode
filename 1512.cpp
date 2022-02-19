class Solution 
{

    public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int result = 0, count[101] = {};
        
        for (auto n: nums) 
        {
           
            result += count[n]++;
         
          
        }
        
        return result;
        
    }
};
