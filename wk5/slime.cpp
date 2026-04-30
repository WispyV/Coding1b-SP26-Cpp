// Lena Parman coding 1 spring 2026
// cl /EHsc slime.cpp && slime

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

vector<string> names = {"Alfred", "Barbara", "Quentin", "Sandra", "Glenn", "Betty"};

class basesSlime {
public:
    string name = "";
    int health = 0;
    int damage = 0;

    in startingHealth = 0;

    //default consturctor
    basesSlime() {
        cout << "A new slime has been formed.\n";
        name = names[rand() % names.size()] + " Slime";
        health = rand() & 4 + 4;
        startingHealth = health;
        damage = rand() % 3 + 3;
    }

    void hello() {
        cout << "I'm " << name << ", with " << health << " health ";
        cout << "and " << damage << " damage.\n";
    }

    //attack another slime
    bool attack(basesSlime& opponent) {
        opponent.health -= damage;
        cout << name << " has done " << damage << " damage to ";
        cout << opponent.name << "!\n";

        if(opponent.health <= 0)    return true;
        else                        return false;
        
    } 
    


};

class bossSlime : public basesSlime {
public:
    int damageMultiplier = 3;

    bossSlime() {
        name = "boss";
        damage = damage * damageMultiplier;
    }

    bool attack(basesSlime& opponent) {
        cout << "This is a boss attack!\n";
        opponent.health -= damage;
        cout << name << " has done " << damage << " damage to ";
        cout << opponent.name << "!\n";

        if(opponent.health <= 0)    return true;
        else                        return false;
    }

    void taunt() {
        cout << "I will crush your bones with my slime!\n";
    }


};

class splitSLime : public basesSlime {
 // build constructor to use half starting heath at original slime
 //
};




int main () {
    srand(time(0));
    cout << " slime battles\n";

    //creat a slime
    basesSlime gerald;
    gerald.name = "Gerald";
    gerald.hello();

    bossSlime destroyer;
    destroyer.name = "Destroyer";
    destroyer.hello();
    destroyer.taunt();

    cout << " Gerald is feeling cheeky...\n";
    gerald.attack(destroyer);

    cout << "Destroyer is enraged!\n";
    if(destroyer.attack(gerald)) {
        cout << "Gerald is no more, DED.\n";
    }


    // create a new vector of slimes with a size of 6
    vector<basesSlime> sludge(6);

    if(rand() % 4 == 0) {
        bossSlime superSlime;
        sludge.push_back(superSlime);
    }

    cout << "here's ours sludge of slimes:\n\n";
    for(auto& slime : sludge) {
        cout << slime.name << "\n";
    }

    random_shuffle(sludge.begin(), sludge.end());

    auto& a = sludge(0);
    auto& b = sludge(1);

    cout << a.name << " is  fighting " << b.name << "!!!\n\n";

    while(a.health > 0 && b.health > 0) {
        if(a.attack(b)) {
            cout << b.name << " has been defeated by "; 
            cout << a.name << ".\n";
        }
        else{
            if(b.attack(a)) {
            cout << a.name << " has been defeated by "; 
            cout << b.name << ".\n";
            }
        }
    }


    return 0;
}