#include <iostream>
#include <stdio.h>
#include "02_hero.cpp"
using namespace std;


int main()
{
    // static allocation
    Hero Ayush(60);
    cout<<"Address of Ayush: "<<&Ayush<<endl;
    //use setter
    Ayush.sethealth(80);
    Ayush.level = 'A';
    //use getter
    cout<< "Health is: "<< Ayush.gethealth() << endl;
    cout<< "Level is: "<< Ayush.level << endl;


    // dynamic allocation
    Hero *h = new Hero(60);
    cout<<"Address of h: "<<&h<<endl;

    //use setter
    (*h).sethealth(20);
    (*h).level = 'C';
    //use getter
    cout<< "Health is: "<< (*h).gethealth() << endl;
    cout<< "Level is: "<< (*h).level << endl;
    (*h).print();       //h->print();
    


    // cout<<"Size: "<<sizeof(Ayush)<<endl;

    return 0;
}