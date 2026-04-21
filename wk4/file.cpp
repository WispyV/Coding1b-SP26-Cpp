// Lena Parman coding 1 spring 2026

#include <iostream>
#include <string>
#include <vector>
#include <fstream>  // file stream

using namespace std;

int main() {
    cout <<"let's write to a file!\n";
    
    string line;
    ifstream readFile("save.txt");  /// create a new vaar, and try to open a file
    if(readFile.is_open()) {
        cout <<"The file is open.\n";
        while(getline(readFile, line)) {
            cout << line << endl;
        }

    }
    else {
        cout <<"couldn't open that file.\n";
    }

    readFile.close();

    cout <<"what names would you like?\n";
    cout <<"enter an empty line to stop.\n";
    string input = "asdf";

    ofstream writeFile("save.txt");

    while(input !="") {
        cout <<"> ";
        getline(cin, input);
        writeFile << input << endl;
    }

    writeFile.close();
    
    return 0;
}