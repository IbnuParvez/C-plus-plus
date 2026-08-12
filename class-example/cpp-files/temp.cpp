#include <iostream>

using namespace std;
int main(){
    double temp[] = {37.5, 32.6, 30.0, 26.0, 25.0, 31.0, 34.0};
    int arrayLength = sizeof(temp) / sizeof(temp[0]);
    double highest = temp[0];
    double lowest = temp[0];
    double sum = 0.0;
    double avg = 0.0;
    for(int x = 0; x < arrayLength; x++){
        sum += temp[x];
        // Check for new highest
        if (temp[x] > highest) {
            highest = temp[x];
        }
        // Check for new lowest
        if (temp[x] < lowest) {
            lowest = temp[x];
        }
    }

    avg = sum / arrayLength;
    cout << "Total Sum: " << sum << "\n";
    cout << "Average:   " << avg << "\n";
    cout << "Highest:   " << highest << "\n";
    cout << "Lowest:    " << lowest << "\n";

    return 0;
}
