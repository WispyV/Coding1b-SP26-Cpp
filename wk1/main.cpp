// lena parman coding 1 spromg 2026
// varible and logic 

// cd c:/, cd C:\Users\lenap\Github\Coding1b-SP26-Cpp\wk1, dir, cl /EHsc main.cpp, main

// compile with the Developer Comman Prompt
// 'cl /EHsc main.cpp' is what you type to compile
// 'main' or 'main.exe. to run the prgram.

#include <iostream>
using namespace std;


int main() {
    cout << "lets learn about variables and logic!\n";

    // declaring and defining variables.
    int playerAge = -1;
    string playerName = "Darth Vader";
    float happinessPercent = 0.61f;
    bool keepPlaying = true;
    

    // just like a branch in unreal engine
    if(playerAge == -1) {
        cout << "How old are you?\n";
        cin >> playerAge;

        if(playerAge <= 12) {
            cout << "I'm sorry this game is for grown ups!\n";
            return 0;       //quit the game early
        }
        else {
            cout << "wow, " << playerAge << " years, that is a long time!\n";
        }
    } // end of if(playerAge)

    if(playerName == "Darth Vader") {
        cout << "is your name " << playerName << "?\n";
        string input;       // create a new string variable to keep track of user input
        cin >> input;       // get the user input

        // the OR operater '||' means that if any test evaluates to true, the if statment is true.
        if(input == "yes" || input == "Yes" || input == "YES") {
            cout << "Well, that's convenient.\n";
        }
        else {
            cout << "What is your name?\n";
            cin >> playerName;
        }

        cout << "Hello " << playerName << ".\n";

    } // end of if(playerName)

    
    bool debug = false; // turn this on to debug the program 

    //the and opeater '&&' requiers that all tests are true.
    if(playerAge == 19 && playerName == "Lena") {
        debug = true;
        cout << "Hellow Creater. Debug mode is ON.\n";
    } // end of if(age && name)

    if(debug) {
        cout << "\n\tDEBUG MODE\n\n";
        cout << "playerAge = " << playerAge << ".\n";
        cout << "playerName = " << playerName << ".\n";
        cout << "happinessPercent = " << happinessPercent << ".\n";
        cout << "keepPlaying = " << keepPlaying << ".\n";
    }

    return 0; 

} // end of main()