// Lena parman Coding 1 spring 2026
// Random Numbers, switch Statements & While Loops


#include <iostream>
#include <cstdlib>  // for srand and rand
#include <ctime>    // for time

using namespace std;

int main() {
    // only once, at the beginning of the program
    // send the random number generator
    srand(time(0));

    cout << "Random Number Game!\n";

    cout << "Here is our first random number: " << rand() << ".\n";

    int counter = 0;
    while(counter++ < 10) {
        int number = rand();
        int min = 50;
        int max = 100;
        int range = max - min;      // 50 
        int clampedNumber = (number % range) + min;

        cout << clampedNumber << endl;
    }

    // set varibles
        // the random number
        int randomRange = (rand() % 11) +  10;
        int number = (rand() % randomRange) + 1;

        // the guess/input
        int guess = -1;

        int totalGuesses = 0;
    // start loop
    while(true) {
        // ask for the player's input between 1 and 10 (inclusive) 
        cout << "I'm thinkg of a number between 1 and " << randomRange << ", can you guess it?\n>>";
        // get the player's guess/input
        cin >> guess;
        totalGuesses++;
        // evaluate the player's guess for 
        // too high
        if (guess > number) {
            cout << "Too high!\n";
        }
        // too low
        else if (guess < number) {
            cout << "Too low!\n";
        }
        // correct!
        else {
            cout << "that's right! You guess ccorrectly!\n";
            cout << "it only took you " << totalGuesses << "guesses!\n";
            // break out of loop
            break;
        }
    } // if incorrect guess, keep looping

    return 0;
}