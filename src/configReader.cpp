#include <fstream>
#include <iostream>
#include <map>
#include <string>

#include "configReader.h"

using namespace std;

map<string, string> read_config_file(string configTxt){
    
    map<string, string> configurations;
    
    // path to config file
    ifstream cFile;
    
    // open config file
    cFile.open(configTxt);
    if(!cFile.is_open()){
        cerr << "Failed to open: " << configTxt << endl;
    }else{
        // start reading file
        string configElement;
        char delim = ' ';
        string parameter;
        string userInput;
        
        while(cFile >> parameter >> userInput){
            configurations[parameter] = userInput;
        }
    } 
    
    cFile.close();
    cFile.seekg(0);
    cFile.clear();
    
    return configurations;
}
