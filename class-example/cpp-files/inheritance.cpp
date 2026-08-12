#include <iostream>
#include <string>

using namespace std;

class Vehicle{
    public:
        string brand;
        string color = "blue";
        int yrmfg;
        void honk(){
            cout << "tooot\n";
        }
};

class Car : public Vehicle {
    public:
        string model = "Mustang";
};

int main(){
    Car ferrari;
    ferrari.honk();
    cout << ferrari.model << " " << ferrari.color << "\n";
    return 0;
}
