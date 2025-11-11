class Base {
public:
    void show() { cout << "Base\n"; }
};

class Left : virtual public Base {};    //"public Base {};" ---> ❌ Ambiguity for show() in "derived" class
class Right : virtual public Base {};   //"public Base {};" ---> ❌ Ambiguity for show() in "derived" class
class Derived : public Left, public Right {};

int main() {
    Derived d;
    d.show();   
}
