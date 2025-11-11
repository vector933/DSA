#include <iostream>

using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    // constructor
    Hero(){
        cout<<"Constructor Called"<<endl;
    }

    // parameterized constructor
    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health = health;
    }

    void print(){
        cout << level<< endl; //can be used for private members also
    }

    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }
    void setlevel(char c){
        level = c;
    }
};