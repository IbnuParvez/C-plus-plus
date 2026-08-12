#include <iostream>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

int main(){
    struct tm datetime = {0};
    time_t timestamp;
    datetime.tm_year = 2025 - 1900;
    datetime.tm_mon = 6;
    datetime.tm_mday = 20;
    timestamp = mktime(&datetime);

    ofstream studentFile("file.txt", ios::app);
    if (studentFile.is_open()) {
            studentFile << "DOB of this student is: " <<ctime(&timestamp);
            studentFile.close();
        }
    string myFile;
    ifstream readingFile("file.txt");
    while (getline(readingFile, myFile)){
        cout << myFile << endl;
    }
    readingFile.close();
    return 0;
}
