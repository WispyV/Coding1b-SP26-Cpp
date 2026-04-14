// fav games assgignment
// create a .cpp program that will allow the user to 
// add a game
// edit a game
// remove a game
// show all games, sorted
// quit

// using vectprs and iterators and alforithms ro do so 
// use pseudocode to organize your thoughts.
// show the available commands to the user
//    at the top of each loop.
// the games do not need to save between launches of the progame
// the user should type the command they want to use as a word

// Lena Parman coding 1 homework 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    // show all games on their random games that they can change.
    cout << "I want to know what your fav games are?\n";

    vector<string> favGames = {"Valorant", "Overwatch",  "Stray", "Minecraft", "Marvel Rivels"};

    string input;

    do {
        cout << "So what would you like to do?\n";
        cout << "you can type 'show' 'edit' 'remove' 'add' or just 'quit'.\n";

        getline(cin, input); 

        // show
        if(input == "show") {
            cout << "let's find the games that are already inputed in.\n ";

            vector<string> favGames = {"Valorant", "Overwatch",  "Stray", "Minecraft", "Marvel Rivels"};

            vector<string>::iterator iter;

            cout << "Here are the favs inputed!\n";
            for(int i = 0; i < favGames.size(); i++) {
                cout << " " << favGames [i] <<"\n";
            }

            iter = favGames.begin();

            cout << "Here " << *iter <<".\n";

            iter += 1;

            cout << "Here also " << *iter <<".\n";

            cout << "what name would you like to select?\n";
            getline(cin, input);

            iter = find(favGames.begin(), favGames.end(), input);

            if // starting on 91 on vec.cpp

        }

        // edit

        // remove
        
        // add
        
        // quit

        // don't recognise that command






    } while(true);


    return 0; 
}