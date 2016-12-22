#include <iostream>
#include "Transport.cpp"

using namespace std;

class Land:public Transport{
    public:
        void setWheels(int val){
            wheels=val;
        }
        int getWheels(){
            return wheels;
        }
    private:
        int wheels;
};