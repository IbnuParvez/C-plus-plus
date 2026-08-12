#include <iostream>

using namespace std;

class myClass{
    public:
        void function(){
            cout << "content of the base class\n";
        }
};

class myOtherClass{
    public:
        void otherFunction(){
            cout << "content of the other class\n";
        }
};

class myChildClass: public myClass, public myOtherClass{};

int main(){
    myChildClass myObject;
    myObject.function();
    myObject.otherFunction();
    return 0;
}
