#include <iostream>
#include <string>

using namespace std;
int main(){
   string txt = "Hello";
   for (char c : txt) {
       cout << c << "\n";
   }
   return 0;
}
