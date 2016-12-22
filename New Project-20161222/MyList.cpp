#include <iostream>
#include <list>
#include <iterator>
#include "Land.cpp"

using namespace std;

typedef list <Transport*> MyList;
typedef MyList::iterator MyIterator;

void PrintList(MyList lst){
    MyIterator pos; Transport *t;
    pos = lst.begin();
    while (pos!=lst.end())
    {
        t = (*pos);
        t->getParameters();
        cout<<"----------------"<<endl;
        pos++;
    }
}
