#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter a number:\n";
    cin >> number;
    while(!cin >> number) {
        cout << "Invalid number\n";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cout << "Your number is: " << number << "\n";
    return 0;
}
