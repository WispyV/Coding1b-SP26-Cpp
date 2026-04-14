// Lena Parman Coding 1 Spring 2026
// vectors, iterators, and algorithms
// ANOTHER WAY to get faster with out the two steps to get it started and refrashed ->
//  cl /EHsc vec.cpp && vec

#include <iostream>
#include <string> // for getline
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    cout << "Let's learn about vectors!\n";

    // this vector exists outside of the do-while loop.
    // so it won't be destoryed every loop.
    vector<string> favGames = {"Valorant", "Overwatch", "Stray"};

    string input;

    do {
        cout << "What would you like to do?\n";
        cout << "You can type 'quit' or 'push' 'find', 'remove'.\n";

        getline(cin, input);  // get input from player

        if(input == "push") {
            cout << "\nLet's make our first vector of strings.\n";

            vector<string> names;

            // add some names with names.push_back()
            names.push_back("Finn");
            names.push_back("Lady Rainicorn");
            names.push_back("Jake");
            names.push_back("The lich");
            names.push_back("Lemongrad");

            cout << "Here are your names!\n";
            for(int i = 0; i < names.size(); i++) {
                cout << "  " << names [i] <<"\n";
            }

            cout << "There are " << names.size() << " names.\n\n";

            cout << *(names.end() -1) << " is mean. alet's get rid of him.\n";

            names.pop_back(); // pop back removes the last element from the vector

            cout << "Here are your names!\n";
            for(int i = 0; i < names.size(); i++) {
                cout << "  " << names [i] <<"\n";
            }




        } // end of 'push'
        else if(input == "find") {
            cout << "Let's try to use the find algorithm.\n";

            // using a collections inteializer to add favs 
            vector<string> favs = {"star Wars", "Kill Bill", "Ponyo"};

            // building an iterator. it points tp a spot in the vector.
            vector<string>::iterator iter;

            cout << "Here are your favs!\n";
            for(int i = 0; i < favs.size(); i++) {
                cout << "  " << favs [i] <<"\n";
            }

            // make iter point at the first element in the vector
            iter = favs.begin(); 

            // the asterisk is a 'derefernce operator'... so that we can get 
                // the value that the iter is point at.
            cout << "iter is pointing at " << *iter <<".\n"; 

            iter += 1;

            cout << "how iter is pointing at " << *iter <<".\n";

            cout << "What name would you like to select?\n";
            getline(cin, input); 

            iter = find(favs.begin(), favs.end(), input);

            if(iter != favs.end()) {
                cout << "we've found " << *iter <<"!\n";
                cout << "would you like to change this fav?\n";
                getline(cin, input);
                if (input =="yes") {
                    cout << "What would you like to chnage this fav to?\n";
                    getline(cin, input);

                    *iter = input;  // changing the fav
                }

                cout << "here are your updated favs!\n";
                for(int i = 0; i < favs.size(); i++) {
                cout << "  " << favs [i] <<"\n";
                }

            }
            else {
                cout << "We couldn't find that name.\n";

            }




        }
        else if(input == "quit") {
            cout << "Thanks for playing.\n";
            break;
        }
        else if(input == "remove") {
            sort(favGames.begin(), favGames.end());
            cout << "Here are your favorite Games.\n";

            for(int i =0; i < favGames.size(); i++) {
                cout << favGames[i] << endl;
            }
             cout << "What game would you like to remove from the list?\n";
             getline(cin, input);

             auto iter = find(favGames.begin(), favGames.end(), input);

             int(iter != favGames.end()) {
                cout << "We've found that name. removing now:\n";
                favGames.erase(iter);
             }

             cout << "Here are your favorite Games.\n";
             for(int i = 0; i < favGames.size(); i++) {
                cout << favGames[i] << endl;
             }
        }
        else {
            cout << "I didn't recognise that command.\n";
        }

        
    } while(true);

    // create a new vector of strings

    return 0;
}