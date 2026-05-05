// Lena Parman coding homework 
// cl /EHsc home.cpp && home

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Critter {
private:
    string name;
    int health;
    int damage;
    int hunger;

public:
    // Constructor
    Critter(string n) {
        name = n;
        health = 100;
        damage = 10;
        hunger = 0;
    }

    // Getters
    string getName() { return name; }
    int getHealth() { return health; }
    int getDamage() { return damage; }
    int getHunger() { return hunger; }

    // Setters
    void setHealth(int h) { health = h; }
    void setDamage(int d) { damage = d; }
    void setHunger(int h) { hunger = h; }

    // Feed
    void feed() {
        hunger -= 3;
        if (hunger < 0) hunger = 0;
        cout << name << " has been fed!\n";
    }

    // Train
    void train() {
        if (hunger > 10) {
            cout << name << " is too hungry to train!\n";
            return;
        }

        hunger++;

        if (hunger > 5) {
            // Critter is getting hungry
            cout << name << " looks hungry...\n";
        }

        int chance = rand() % 2;
        if (chance == 0) {
            damage += 5;
            cout << name << " increased damage!\n";
        } else {
            health += 10;
            cout << name << " increased health!\n";
        }
    }

    // Display stats
    void listen() {
        cout << "\n--- " << name << "'s Stats ---\n";
        cout << "Health: " << health << endl;
        cout << "Damage: " << damage << endl;
        cout << "Hunger: " << hunger << endl;
    }

    // Battle
    void battle(Critter enemy) {
        if (hunger > 10) {
            cout << name << " is too hungry to battle!\n";
            return;
        }

        hunger++;

        if (hunger > 5) {
            cout << name << " looks hungry...\n";
        }

        int choice;

        while (health > 0 && enemy.getHealth() > 0) {
            cout << "\n1. Attack\n2. Heal\n3. Run\nChoice: ";
            cin >> choice;

            if (choice == 1) {
                enemy.setHealth(enemy.getHealth() - damage);
                cout << "You attacked " << enemy.getName() << "!\n";
            }
            else if (choice == 2) {
                health += 10;
                cout << "You healed!\n";
            }
            else if (choice == 3) {
                cout << "You ran away!\n";
                return;
            }

            if (enemy.getHealth() > 0) {
                health -= enemy.getDamage();
                cout << enemy.getName() << " attacked you!\n";
            }

            cout << name << " Health: " << health << endl;
            cout << enemy.getName() << " Health: " << enemy.getHealth() << endl;
        }

        if (health <= 0) {
            cout << "You lost the battle...\n";
        } else {
            cout << "You won the battle!\n";
        }
    }
};

// Load names
vector<string> loadNames(string filename) {
    vector<string> names;
    ifstream file(filename);
    string name;

    if (!file) {
        cout << "Error: Could not open names.txt\n";
        return names;
    }

    while (getline(file, name)) {
        if (!name.empty()) {
            names.push_back(name);
        }
    }

    return names;
}

int main() {
    srand(time(0));

    vector<string> names = loadNames("names.txt");

    
    if (names.empty()) {
        cout << "Error: names.txt is empty or missing.\n";
        return 1;
    }

    // name your critter 
    string playerName;
    cout << "Enter your critter's name: ";
    cin >> playerName;

    Critter myCritter(playerName);

    int choice;

    while (true) {
        cout << "\n--- MENU ---\n";
        cout << "1. Feed\n2. Train\n3. Listen\n4. Battle\n5. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            myCritter.feed();
        }
        else if (choice == 2) {
            myCritter.train();
        }
        else if (choice == 3) {
            myCritter.listen();
        }
        else if (choice == 4) {

            // random enemy
            string enemyName = names[rand() % names.size()];

            Critter enemy(enemyName);

            cout << "\nA wild " << enemyName << " appears!\n";

            myCritter.battle(enemy);
        }
        else if (choice == 5) {
            break;
        }
    }

    return 0;
}