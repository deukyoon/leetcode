class Solution 
{

    public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int n = nums.size();
        
        int x[102] = {0};
        
        for(auto i:nums)
        {
            x[i+1]++;
        }
        
        for(int i=1; i < 102; i++)
        {
            x[i] += x[i-1];
        }
        
        for(int i=0; i < n; i++)
        {
            nums[i] = x[nums[i]];
        }
        
        return nums;
        
    }
};
