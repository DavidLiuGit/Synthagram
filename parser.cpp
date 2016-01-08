// parser

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>

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
    }
    
    delete ref;
}

// scrambles the letters in the word, and returns the letters in sorted alphabetical order
string scramble (string word){
    string wurd = word;
    std::sort(wurd.begin(), wurd.end());
    return wurd;
}