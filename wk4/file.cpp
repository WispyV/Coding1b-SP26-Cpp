// Lena Parman coding 1 spring 2026

#include <iostream>
#include <string>
#include <vector>
#include <fstream>  // file stream

using namespace std;

void read(string path = "save.txt") {

    string line;
    ifstream readFile("path");  /// create a new vaar, and try to open a file
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

}

void read(vector<string>& vec, string path = "save.txt") {
    string line;
    ifstream readFile(path);
    if(readFile.is_open()) {
        cout <<"The file is open.\n";
        while(getline(readFile, line)) {
            vec.push_back(line);
        }

    }
    else {
        cout <<"couldn't open that file.\n";
    }

    readFile.close();

}

void write(vector<string>& vec, string path = "save.txt") {
    // cout <<"starting write() function.\n";
    ofstream writeFile("path");

    if(writeFile.is_open()) {
        // cout <<"the write file is open.\n";
        for(int i = 0; i <vec.size(); i++) {
            writeFile <<vec[i] << endl;
        }
    }
    else {
        cout <<"couldn't open new writeFile.\n";
    }
    writeFile.close();
}

int main() {
    cout <<"let's write to a file!\n";
    vector<string> favs;
    string input = "asdf";


    string path = "save.txt";

    cout << "what file would you like to open?\n Enter to use default.\n";
    getline(cin, input);
    if(input !="no") {
        path = input;
    }

    read(path);
    read(favs, path); 


    cout <<"what names would you like to add?\n";
    cout <<"enter an empty line to stop.\n";

    // ofstream writeFile("save.txt");

    while(input !="") {
        cout <<"> ";
        getline(cin, input);
        if(input == "") {
            break;
        }
        // writeFile << input << endl;
        favs.push_back(input);
    }

    write(favs, path);

    // writeFile.close();

    return 0;
}