class Solution 
{
    public:
    int xorOperation(int n, int a) 
    {   
		int result = a;
		
        for (int i=1; i < n; i++)
        {
			
            result = result ^ (a + 2 * i);
			
        }
		
        return result;
	}
};
	
