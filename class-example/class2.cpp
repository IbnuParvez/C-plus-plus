#include <iostream>
#include <string>

using namespace std;

class Game {
    private:
        string name;
        string players;
        int year;
    public:
        Game(string fName, string fPlayers, int fYear): name(fName), players(fPlayers), year(fYear) {}
        void showInfo() const{
            cout << name << ", " << players << ", " << year << "\n";
        }
};

int main(){
    Game Football("FIFA", "Multiplayer", 2026);
    Game Battle("Nemo", "Single player", 2020);

    Football.showInfo();
    Battle.showInfo();
    return 0;
}
