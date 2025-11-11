#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

class Hero{
    private:
    int health;
    public:
    char *name;
    char level;

    //simple constructor
    Hero(){
        cout<<"Simple Constructor Called"<<endl;
        name = new char[100];

    }

    // parameterized constructor
    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health = health;
    }

    Hero(int health, char level){
        this->health = health;
        this->level = level;
    }

    //copy constructor -> does deep copy but if you're using the default one..... it will do shallow
    // in shallow the pointer varible address will also be copied and change in one will reflect in both bcz address is passed
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name= ch;


        cout<<"Copy Constructor Called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
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

int main()
{
    // static allocation
    Hero Ayush(60);
    cout<<"Address of Ayush: "<<&Ayush<<endl;
    //use setter
    Ayush.level = 'A';
    //use getter
    cout<< "Health is: "<< Ayush.gethealth() << endl;
    cout<< "Level is: "<< Ayush.level << endl;

    Hero S;

    S = Ayush;
    cout<< "Health is: "<< S.gethealth() << endl;
    cout<< "Level is: "<< S.level << endl;

    return 0;
}