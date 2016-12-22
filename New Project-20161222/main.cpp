#include <iostream>
//#include "Transport.cpp"
#include "Land.cpp"

using namespace std;

int main(){
    Transport *t;
    t = new Transport();
    t->setPassengers(4);
    cout<<t->getPassengers()<<endl;
    cout<<"-------------------"<<endl;
    t = new Land();
    t->setPassengers(40);
    t->setWheels(8);
    cout<<t->getPassengers()<<endl;
    cout<<t->getWheels()<<endl;
    return 0;
}