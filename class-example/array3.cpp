#include <iostream>

using namespace std;
int main(){
    int myNum[] = {10, 30, 20, 40, 50};
    for(int num: myNum){
        cout << num << "\n";
    }
    return 0;
}
