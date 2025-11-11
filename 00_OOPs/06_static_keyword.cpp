#include <iostream>
using namespace std;

class Hero {
public:
    static int totalHeroes;  // Static member declaration

    Hero() {
        totalHeroes++;       // Increment count on object creation
        cout << "Hero created. Total heroes: " << totalHeroes << endl;
    }

    ~Hero() {
        totalHeroes--;       // Decrement count on object destruction
        cout << "Hero destroyed. Remaining heroes: " << totalHeroes << endl;
    }

    static void showTotalHeroes() {
        cout << "Current total heroes: " << totalHeroes << endl;
    }
};

// Static member must initialise outside the class
int Hero::totalHeroes = 0;

int main() {
    Hero::showTotalHeroes();  // Access static function without object

    Hero h1;
    Hero h2;

    Hero::showTotalHeroes();  // Show count after creating two objects

    {
        Hero h3;
        Hero::showTotalHeroes();  // Count inside a nested scope
    }  // h3 goes out of scope here

    Hero::showTotalHeroes();  // Final count after h3 is destroyed

    cout << "Current total heroes: " <<Hero:: totalHeroes << endl;

    return 0;
}
