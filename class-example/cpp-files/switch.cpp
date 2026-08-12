#include <iostream>

using namespace std;
int main(){
    int day;
        cout << "Enter the number of the day you would prefer: \n";
        cin >> day;
        switch (day){
            case 1:
                cout << "The day is Monday\n";
            case 2:
                cout << "The day is Tuesday\n";
            default:
                cout << "Any other day boss!\n";
        }
    return 0;
}
