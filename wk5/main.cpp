// Lena parman coding 1 spring 2026
// cl /EHsc main.cpp && main

#include <iostream>
#include <string>
using namespace std;

// classes are custom variable types
// variables, fuctions

//constructors, getters and setters (Privacy)

class robot {
private:
    string name;
    int charge;
    int boredom;

public:
    //constructor, sets up the class with input variables
    //doesn't have a return type, must be the same name as class
    robot(string givenName, int givenCharge, int givenBoredom) {
        name = givenName;
        charge = givenCharge;
        boredom = givenBoredom;
        status();
    }

    robot() {
        name = "Rob";
        charge = 10;
        boredom =  10;
        status();
    }

    void status() {
        cout << "Hello, my name is " << name;
        cout << " and my charge is " << charge << ".\n";
        cout << "I am";     // start the sentance

        if(boredom < 5) cout << " happy";
        else if(boredom < 10) cout << " bored";
        else if(boredom < 15) cout << " frustrated";
        else cout << " Angry";

        cout << ".\n";      // end the setance

    }

    string getName() {
        return name;
    }

    int getCharge() {
        return charge;
    }

    int getboredom() {
        return boredom;
    }

    // setters
    void setName(string givenName) {
        if(givenName.size() <= 5) {
            name = givenName;
        }
        else {
            cout << "error: " << givenName << " is too long.\n";
        }
    }

    void setCharge(int givenCharge) {
        // clamp charge to between 0 and 100
        if(givenCharge < 0) {
            charge = 0;
        }
        else if(givenCharge > 100) {
            charge = 100;
        }
        else charge = givenCharge;
    }

    void setBoredom(int givenBoredom) {
        if (givenBoredom < 20) {
            boredom = 20;
        }
        else boredom = givenBoredom;
    }

    void changeChargeBy(int amount = 1) {
        setCharge(charge += amount);
    }

}; // end of robot class

int main() {
    cout <<"Classes!\n";

    // create our first instance od a robot
    robot artoo("R2-D2", 45, 3);
    // artoo.name = "R2-D2";
    // artoo.charge = 45;
    // artoo.boredom = 3;
    cout << "Artoo has " << artoo.getName().size() << " characters in their name.\n";

    robot threepio;
    threepio.setName("C-3PO");   // using the setter
    threepio.setCharge(2);
    threepio.setBoredom(12);


    artoo.status();
    threepio.status();


    cout << "Threepio has low battery, let's have artoo charge him up!\n";

    while(threepio.getCharge() < 15) {
        if(artoo.getCharge() > 0) {
            artoo.changeChargeBy(-1);
            threepio.changeChargeBy(1);
        }
        else {
            cout << "Artoo is out of charge of energy!\n";
            break;
        }
    }

    artoo.status();
    threepio.status();

    return 0;
}