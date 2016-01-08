#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <vector>

#define PATH "Dictionary/dictionary.txt"

#include "dictionary.h"

using namespace std;

string scramble (string);
vector<string> lookUp (string);


void help(){
    cout << "help" << endl;
}

void parser(){
    string word, line = "";
    
    dictionary *ref = new dictionary( (string) PATH );
    
    while ( !cin.eof() ){
        cout << "> ";
        getline (cin, line);
        
        stringstream linestream( line );
        linestream >> word;
        
        lookUp (word);
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
    vector<string> results;
    word = scramble(word);
    
    return results;
}
