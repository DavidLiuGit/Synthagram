// parser

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <vector>

#include "dictionary.h"

using namespace std;

void help(){
    cout << "help" << endl;
}

void parser(){
    string word, line = "";
    
    dictionary *ref = new dictionary();
    
    while ( !cin.eof() ){
        cout << "> ";
        getline (cin, line);
        
        stringstream linestream( line );
        linestream >> word;
        
        word = scramble(word);          // alphabetically sort the string
    }
    
    delete ref;
}

// scrambles the letters in the word, and returns the letters in sorted alphabetical order
string scramble (string word){
    string wurd = word;
    std::sort(wurd.begin(), wurd.end());
    return wurd;
}

// this function will scramble the user input, and then look it up in the hash table
vector<string> lookUp (string word){
    word = scramble(word);
}
