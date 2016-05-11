#include <cstdlib>
#include <string>
#include <iostream>

#define PATH "Dictionary/dictionary.txt"
#include "dictionary.h"

#define V1 1
#define V2 1

using namespace std;

void help();
void parser(dictionary *ref);

// About synthagram
void about(){
    cout << "Synthagram is a console application that finds anagrams based on user input." << endl;    
    cout << "Current version: " << (unsigned int)V1 << '.' << (unsigned int)V2 << endl;
    //cout << "This program uses C++2011" << endl << endl;
    cout << "The default dictionary uses English spelling instead of American (favour, colour, etc.)" << endl;
}

int main(int argc, char** argv) {
    if (argc == 2)
    about();
    
    dictionary *ref = new dictionary( (string) PATH );
    parser(ref);
    
    delete ref;
    
    return 0;
}

