class OrderedStream 
{

    public:
    vector<string> stream ;
    
    int i=0;
    
    OrderedStream(int n) 
    {
        stream.resize(n);
    }
    
    vector<string> insert(int a, string value) 
    {
        vector<string> result;
        
        stream[a-1] = value;
        
        while(i<stream.size() && stream[i]!="")
        {
            result.push_back(stream[i]);
            
            i++;
        }
        
        return result;
    }
};
