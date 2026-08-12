#include <ctime>
#include <iostream>

using namespace std;

int main(){
    struct tm datetime = {0};
    time_t timestamp;
    datetime.tm_year = 2025 - 1900;
    datetime.tm_mon = 12 - 1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    timestamp = mktime(&datetime);
    cout << ctime(&timestamp);
    return 0;
}
