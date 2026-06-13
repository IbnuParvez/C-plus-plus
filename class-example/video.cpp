#include <iostream>
#include <string>

using namespace std;

string createCharacter(string name, string classType = "Warrior", int health = 100, int mana = 20){
    string character = "The character you created " + name + " of class: " + classType + " has: " + to_string(health) + " "+ to_string(mana) + "\n";
    cout << character;
    return character;
}

int main(){
    createCharacter("Ab");
    createCharacter("B", "caretaker");
    createCharacter("C", "caretaker", 50);
    createCharacter("D", "warrior",30, 70);
    return 0;
}
