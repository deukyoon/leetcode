class Solution 
{
    public:
    int countPoints(string rings) 
    {
    
    int red[10] = {0};
    int green[10] = {0};
    int blue[10] = {0};
    
    int rod;
        
    for(int i=0; i < rings.size(); i+=2)
    {
        rod = rings[i+1]-'0';
        
        if(rings[i] == 'R')
        {
            red[rod]++;
        }
        
        else if(rings[i] == 'G')
        {
            green[rod]++;
        }
        
        else if(rings[i] == 'B')
        {
            blue[rod]++;
        }
        
    }
    
    int count=0;
    //////////////////////////////////////////////////////////    
    for(int j=0; j < 10; j++)
    {
        if(red[j] > 0 && green[j] > 0 && blue[j] > 0)
        {
            count++;
        }
    }
    
    return count;
    }
};
