#include <iostream>

using namespace std;
int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    for(int i = 0; i < 7; i++){
        cout << "The number at index " << i << " is: " << numbers[i] << "\n";
    }
    return 0;
}
