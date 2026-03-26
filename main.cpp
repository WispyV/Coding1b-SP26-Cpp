// Lena Parman Coding 1 Spring 2026
// Our first C++ Program

#include <iostream>      // in out stream, for sending text to the console.
#include <string>        // for playerName

using namespace std;     // so we don't have tp type "std; :" all the time.

// here is where we start the program
int main() {
    //variavles declared at the top is best practice.
    string playerName;   //Variable use comLCase

    // ask the player for their name
    cout << "What is your name, player? ";

    //assgin whatever the player types as the value of playerName
    cin >> playerName;

    //greet the player by name
    cout << "Hello " << playerName << "." << endl;


    //user Control+slash to comment out lines
    // cout << "Hi this is really cool." << endl;      //cout = console out, endl + end line

    return 0;            // end the program 

}