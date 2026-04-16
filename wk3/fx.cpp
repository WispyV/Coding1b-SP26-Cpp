// Lena Parman Coding 1 spring 2026
// functions 

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;


void sayHello() {
    cout << "Hello!\n";
}

void doAddition(int firstNum, int secondNum) {
    cout << "Our first number is " << firstNum << ".\n";
    cout << "Our second number is " << secondNum << ".\n";
    cout << "Togather they made " << firstNum + secondNum << ".\n";
}

int dieRoll(int sides = 6) {
    return rand() %sides + 1;
}

// create a function
// return type is bool
// name is askYesNo
// no input parameters

bool askYesNo(string question = "Do you want to keep playing?") {
    while(true) {
        cout << question << " ('yes' or 'no')\n";
        string input;
        getline(cin, input);

        if(input == "yes") {
            return true;
        }
        else if(input == "no") {
            return false;
        }
        else {
            cout << "I did not understand. Please type 'yes' or 'no'.\n";
        } 
    }
}

void showVec(vector<string>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

void addStringToVec(vector<string>& vec) {
    cout << "What names would you like to add?\n";
    string input;
    getline(cin, input);

    vec.push_back(input);

    // showVec(vec);
}

int main() {
    srand(time(0));
    vector<string> names = {"Glep", "Charile", "Pim", "Alen", "Mr Boss"};

    showVec(names);

    addStringToVec(names);

    showVec(names);


    cout << "Finally, functions!\n";

    sayHello();

    doAddition(14, 3);

    cout << "let's roll the dice! Our first number is " << dieRoll(6) << ".\n";
    
    doAddition(dieRoll(20), dieRoll(20));
    doAddition(dieRoll(), dieRoll(222));

    if(askYesNo()) {
        cout << "Let's start the next level!\n";
    }
    else {
        cout << "thanks for playing!\n";
        return 0;
    }

    if(askYesNo("Do you like sliming friends?")) {
        cout << "Yes I do too!\n";
    }
    else {
        cout << "Aww I'm sad you don't it's a great show!\n";
    }

    return 0;
} 