class Solution 
{

    public:
    string interpret(string command) 
    {
    string cod;
    
    for(int i=0; i < command.size(); i++)
    {
        if (command[i] == 'G')
            cod += 'G';
        
        else if(command[i] == '(' && command[i+1] == ')')
            cod += 'o';
                
        else if(command[i] == '(' && command[i+1] == 'a')
            cod += "al";
    }
            
    return cod;
    }
};
