#include <iostream>
#include <string>

using namespace std;

class Book {
    private:
    string name;
    int year;
    string author;
    string ISBN;

    public:
        Book(string bName, int bYear, string bAuthor, string bISBN): name(bName), year(bYear), author(bAuthor), ISBN(bISBN) {};
        void showInfo() const {
            cout << name << ", " << year << ", " << author << ", " << ISBN << "\n";
        }
};

int main(){
    Book fiction("Percy", 2001, "Rick Riordan", "01S-132");
    Book native("Harry", 1995, "JK Rowling", "0W3-123");

    fiction.showInfo();
    native.showInfo();
    return 0;
}
