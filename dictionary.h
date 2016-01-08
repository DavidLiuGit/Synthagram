#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

class dictionary {
public:
    // constructors & destructor
    dictionary();
    dictionary(ifstream &input);
    virtual ~dictionary();
    
    // member functions
    vector<string> refLookUp (string letters);
    void createRef (ifstream &input);
    string sort (string);
    
private:
    map <string, vector<string> > allWords;     // the main reference hash table/map
    
};

#endif /* DICTIONARY_H */

