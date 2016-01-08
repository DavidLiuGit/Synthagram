#include <cstdlib>
#include <string>
#include <unordered_map>
#include <iostream>

#define V1 1
#define V2 0

using namespace std;


// About synthagram
void about(){
    cout << "Synthagram is a console application that finds anagrams based on user input." << endl;    
    cout << "Current version: " << (unsigned int)V1 << '.' << (unsigned int)V2 << endl;
    cout << "This program uses C++2011" << endl << endl;
}

int main(int argc, char** argv) {
    about();

    return 0;
}

