class Solution 
{

    public:
    int subtractProductAndSum(int n) 
    {
        int sum=0; int product=1; int x;
        
        while(n > 0)
        {
            int x = n % 10;
            
            product *= x;
            sum += x; 
            
            n = n/10;
        }
        
        return product - sum;
        
    }
};
