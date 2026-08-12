#include <iostream>
#include <string>

using namespace std;

string printHeader(string message, int count = 10, char borderChar = '*'){
    string borderLine = string(count, borderChar);
    string paragraph =  borderLine + "\n" + message + " the count is: " + to_string(count) + "\n" + borderLine + "\n";
    cout << paragraph;
    return paragraph;
}

int main(){
    printHeader("string message");
    printHeader("hello", 13, '/');
    return 0;
}
