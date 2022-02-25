class ParkingSystem 
{

    public:
    
    vector<int> car;
    
    ParkingSystem(int big, int medium, int small) 
    {
        car = {big, medium, small};
    }
    
    bool addCar(int carType) 
    {
        return car[carType - 1]-- > 0;
    }
};

