#include <iostream>

using namespace std;

class Transport{
    public:
        virtual void setPassengers(int val){
            passengers=val;
        }
        virtual int getPassengers(){
            
        }
    private:
        int passengers;
};