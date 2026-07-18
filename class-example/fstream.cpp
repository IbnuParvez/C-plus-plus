#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    //create and open a file
    ofstream myFile("Student.txt");
    myFile << "This is my name";
    myFile.close();

    //create a string to output the file content
    string studentFile;
    ifstream myReadFile("Student.txt");
        while (getline(myReadFile, studentFile)){
            cout << studentFile << endl;
        }
        myReadFile.close();
    return 0;
}
