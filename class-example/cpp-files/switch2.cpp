#include <iostream>

using namespace std;
int main(){
    char letter;
    cout << "Enter any letter between A and F\n";
    cin >> letter;
    switch (letter){
        case 'A':
        case 'a':
            cout << "Excellent\n";
            break;
        case 'B':
        case 'b':
            cout << "Good score\n";
            break;
        case 'C':
        case 'c':
            cout << "Average\n";
            break;
        case 'D':
        case 'd':
            cout << "Fail\n";
            break;
        default:
            cout << "Invalid value\n";
    }
    return 0;
}
