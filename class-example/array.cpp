#include <iostream>
#include <string>

using namespace std;
int main(){
    string car[] = {"Ford", "Toyota", "Mazda", "Nissan"};
    for (int i = 0; i < 4; i++) {
        cout << i << " = " << car[i] << "\n";
    }
    return 0;
}
