#include <iostream>

using namespace std;
int main(){
    int i, j;
    for( i = 0 ;i <= 10; i++){
        for( j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
