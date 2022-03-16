class Solution
{

    public:
    int countKDifference(vector<int>& nums, int k) 
    {
        int x=nums.size();
        int res=0;
        
        for (int i=0; i < x; ++i) 
        {
            for (int j=i+1; j < x; ++j) 
            {
                res += abs(nums[i] - nums[j]) == k;
            }
        }
        
        return res;
    
    }
};
