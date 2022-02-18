class Solution 
{

    public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> array;
        
        for(int i=0; i < n; i++)
        {
            array.push_back(nums[i]);
            array.push_back(nums[n+i]);
        }
        
        return array;
        
    }
};
