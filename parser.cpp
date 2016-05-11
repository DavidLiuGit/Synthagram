#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <vector>
#include "dictionary.h"

using namespace std;

void process(string, dictionary*);
string scramble (string);
vector<string>* lookUp (string, dictionary*);


void help(){
    cout << "help" << endl;
}

void parser(dictionary *ref){
    string word, line = "";
    
    // run this loop until the user enters EOF (ctrl+D)
    while ( !cin.eof() ){
        cout << "> ";
        getline (cin, line);
        
        stringstream linestream( line );
        
        linestream >> word;
        
        lookUp ( word, ref );
        
    }
    
}

// scrambles the letters in the word, and returns the letters in sorted alphabetical order
string scramble (string word){
    string wurd = word;
    std::sort(wurd.begin(), wurd.end());
    return wurd;
}

// this function will scramble the user input, and then look it up in the hash table
vector<string>* lookUp (string word, dictionary *ref){
    word = scramble(word);
    
    vector<string> *anagrams = ref->refLookUp( word );
    if (anagrams){              // if NOT a nullptr (i.e. at least 1 anagram was found)
        cout << anagrams->size() << " anagram(s) were found:" << endl;
        for (int x = 0; x < anagrams->size(); x++){         // print out each anagram
            cout << ' ' << anagrams->at(x) << endl;
        }
    } else {                    // if no anagram was found
        cout << "No anagram was found in the dictionary for your input." << endl;
    }
    
    return anagrams;
}
