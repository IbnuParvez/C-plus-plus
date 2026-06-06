#include <iostream>

using namespace std;
int main(){
    int sum = 0, avg = 0;
    int myNum[] = {20, 30, 40, 50, 60, 70, 80};
    int elementNum = sizeof(myNum)/ sizeof(myNum[0]);
    for(int i = 0; i < elementNum; i++){
        sum += myNum[i];
        }
        cout << "The total sum is: " << sum << "\n";
        avg = sum / elementNum;
        cout << "The average is: " << avg << "\n";
    return 0;
}
