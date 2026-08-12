#include <iostream>

using namespace std;

int main() {
    int dice = 0;
    bool isValid = false;

    do {
        cout << "Enter a dice value (1-6): ";
        cin >> dice;
        if (dice >= 1 && dice <= 6) {
            cout << "Success! You entered a valid dice value: " << dice << endl;
            isValid = true;
        } else {
            cout << "Invalid input. A dice must be between 1 and 6. Try again.\n\n";
        }
    } while (!isValid);
}
