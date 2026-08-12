#include <iostream>

using namespace std;

int calculateTotal(int price, int discount = 0.0, double tax = 0.05 ){
    int total = (price - discount ) * (1 + tax);
    return total;
}

int main(){
    cout << "Test 1: $" << calculateTotal(100.0) << "\n";
    cout << "Test 2: $" << calculateTotal(100.0, 20.0) << "\n";
    cout << "Test 3: $" << calculateTotal(100.0, 20.0, 0.10) << "\n";
    return 0;
}
