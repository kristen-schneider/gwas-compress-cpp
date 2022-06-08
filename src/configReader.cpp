#include <fstream>
#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, string> read_config_file(string configTxt){
    
    map<string, string> configurations;
    
    // path to config file
    ifstream cFile (configTxt);
    // open config file
    //cFile.open(configTxt);
    if(!cFile.is_open()){
        cout << "Failed to open: " << configTxt << endl;
    }
    cFile.close();
    cFile.seekg(0);
    cFile.clear();
    
    return configurations;
}
