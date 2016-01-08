#include "dictionary.h"

dictionary::dictionary() {
    // default constructor
}

dictionary::dictionary(ifstream& input){
    // overload constructor; initialize the reference map based on txt file
}

dictionary::~dictionary() {
}

void dictionary::createRef(ifstream& input){
    // member function used for creating the reference map based on a txt file
    string line;
    
    // define the variable-type "refPair"
    typedef std::pair< string, vector<string> > refPair;   // this pair will be used to insert key and value pairs into the ref. map
    
    if (input.is_open()){               
        while ( getline (input, line) ){        // read the txt file line by line
            string scrambled = sort ( line );   // scramble the word
            
            if ( allWords.find( scrambled ) == allWords.end() ){        // if the scrambled word does NOT already exist in the reference map
                vector<string> words( 1 );             // then create a vector of strings, capacity 1
                words.push_back( line );                // add the unscrambled word to the vector
                allWords.insert( refPair (scrambled, words) );    // add to the ref. map: the scrambled string as the hash key, and the vector as the hash value
            } 
            else                                                    // if the scrambled word DOES already exist in the reference map
            {                                                
                allWords.at(scrambled).push_back( line );           // then simply add the unscrambled word onto the vector
            }
        }
        
        input.close();
    } else {
        cout << "Error: unable to open the dictionary file" << endl;
    }
}

string dictionary::sort(string word){
    string wurd = word;
    std::sort(wurd.begin(), wurd.end());
    return wurd;
}
