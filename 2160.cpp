class Solution 
{

    public:
    int minimumSum(int num) 
    {
        auto a = to_string(num);
        
        sort(a.begin(), a.end());
        
        int result = (a[0] - '0' + a[1] - '0') * 10 + a[2] + a[3] - '0' - '0';
        
        return result;
    }
};
