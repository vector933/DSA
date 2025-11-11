#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    // struct student
    // {
    //     int roll;
    //     char name[25];
    //     char dept[10];
    // };
    // struct student s;
    // s.roll = 32;
    // strcpy(s.name,"Ayush");
    // strcpy(s.dept,"AIML");

    // cout<<s.roll<<' '<<s.name<<' '<<s.dept<<endl;

    struct card
    {
        int face; //1....10,11=J,12=Q,13=K
        int shape;//1 = club, 2 = spades, 3 = diamond, 4 = heart
        int colour;//1 = black, 2 = red
    };
    struct card c;
    int ret;
    cout<<"Write the face in digital manner"<<endl;
    if (!(cin >> c.face) || c.face <= 0 || c.face > 13){
        cout << "Invalid Input" << endl;
        return 1;
    }
    cout<<"Write the shape in digital manner"<<endl;
     if (!(cin >> c.shape) || c.shape <= 0 || c.shape > 4) { // Check for valid input and positive value
        cout << "Invalid Input" << endl;
        return 1;
    }
    cout<<"Write the shape in digital manner"<<endl;
    if (!(cin >> c.colour) || c.colour <= 0 || c.colour > 2) { // Check for valid input and positive value
        cout << "Invalid Input" << endl;
        return 1;
    }
    int i;
    if(c.face < 11){
        cout<<"Number"<<' '<<c.face<<' ';
        }
    else if(c.face == 11){
        cout<<"Joker"<<' ';
        }
    else if(c.face == 12){
        cout<<"Queen"<<' ';
        }
    else if(c.face == 13){
        cout<<"King"<<' ';
        }
    if(c.shape == 1){
        cout<<"Club"<<' ';
        }
    else if(c.shape == 2){
        cout<<"Spade"<<' ';
        }
    else if(c.shape == 3){
        cout<<"Diamond"<<' ';
        }
    else if(c.shape == 4){
        cout<<"Heart"<<' ';
        }
    if(c.colour == 1){
        cout<<"Black"<<' ';
        }
    else if(c.colour == 2){
        cout<<"Red"<<' ';
        }
    return 0;
}