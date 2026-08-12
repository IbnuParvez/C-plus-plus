#include <iostream>

using namespace std;

void printSum(int a, int b){
    int sum = a + b;
    cout << "The sum of the two numbers is: " << sum << "\n";
}

int main(){
    printSum(1, 3);
    return 0;
}
