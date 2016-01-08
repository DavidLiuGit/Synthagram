#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <fstream>

using namespace std;

class dictionary {
public:
    //constructors
    dictionary();
    dictionary(ifstream &input);
    
    virtual ~dictionary();
private:
    map <string, vector<string> > allWords;
    
};

#endif /* DICTIONARY_H */

