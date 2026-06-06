#include <iostream>

using namespace std;
int main(){
    int numbers[] = {22, 134, 8633, 44, 5, 36, 77};
    int arrayLength = sizeof(numbers) / sizeof(numbers[0]);
    for(int i = 0; i < arrayLength; i++){
        cout << "The number at index " << i << " is: " << numbers[i] << "\n";
    }
    cout << "The total number of elements in the array is: "<< arrayLength << "\n";
    return 0;
}
