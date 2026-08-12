#include <iostream>

using namespace std;
int main(){
    int x = 0;
    cout << "Enter the number of day you would like: \n";
    cin >> x;
    if (x < 1 || x > 7) {
            cout << "Invalid day! Please enter a number between 1 and 7.\n";
            return 0;
    }
    while( x <= 6){
        cout << "Day " << x << " Dont celebrate yet!. Work!\n";
        x++;
    }
        cout << "Celebrate! Its a weekend. It's a Sunday\n";
    return 0;
}
