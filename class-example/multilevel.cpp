#include <iostream>

using namespace std;

class Family{
    public:
        void gene(){
            cout << "our family is funny\n";
        }
};

class Father: public Family{};
class Child: public Father{};

int main(){
    Child myGene;
    myGene.gene();
    return 0;
}
