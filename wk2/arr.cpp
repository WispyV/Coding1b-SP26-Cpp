// Lena Parman coding 1 Spring 2026
// Arrays, for loops, enums, and Swich Statments

#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout << "let's make some arrays!\n";

    // arrays cannot change their size
    // arrays dont know where the last index is 
    // arrays are a list of simmilar varibles type 
    // arrays are ordered

    // this is creating an interger array with a size of 5
    int scores[5];       

    scores[0] = 4545;
    scores[1] = 13;
    scores[2] = 9001;
    scores[3] = 2456;
    scores[4] = -4;


    cout << "The first score is " << scores[0] <<".\n";

    int index = 0;
    while(index < 5) {
        cout << scores[index] <<"\n";
        index++;  
    }

    cout << "Using a for loop:\n";
    // for loop has the 'iterator' built in.
    for(int i = 0; i < 5; i++) {
        cout << scores[i] <<"\n";
    }

    // lets build a strong array for names
    string names[10];
    string input;
    index = 0;
    // we want the user to add names to the array
    while(index < 10) {
        cout << "type names, and when done type 'done':";
        cin >> input;

        // untill they type 'done'
        if(input == "done") {
            cout << "Done adding names.\n";
            break;          // stop lopping
        }

        //add the name to the array
        // then add 1 to index
        names[index++] = input;

    }
    // or until the list is full
    // show the list of names
    for(int i = 0; i < index; i++) {
        if(names[i] == "") {
            continue;              // start the loop over early.

        }
        cout << names[i] << "\n"; 
    }

    // create a new string and array
    string newNames[] = {"Willow", "Pepper", "Kimber", "Cash", "Fish", "Ozzy", "Meatball", 
    };

    cout << "Here are the new names:\n";
    for(int i = 0; i < 7; i++) {
        cout << i + 1 << ". " << newNames[i] << "\n"; 
    }

    int randIndex = rand() % 7;
    string character = newNames[rand() % 7];

    cout << character << ", Let's talk about them.\n";

    // an enumerator is a custom varible type with only th vaules that we specify they corrspenf to numbers
    enum favor {LOVE, LIKE, DISLIKE, LOATHE};

    switch(rand() % 4) {
        case LOVE:
            cout << "I love " << character << ".\n";
            break;
        case LIKE:
            cout << "I like " << character << ".\n";
            break;
        case DISLIKE:
            cout << "I dislike " << character << ".\n";
            break;
        case LOATHE:
            cout << "I loathe " << character << ".\n";
            break;
    }




    return 0;
}