#include <fstream>
#include <iostream>
#include <map>
#include <string>

using namespace std;

map read_config_file(string configTxt){
    
    map<string, string> configurations;
    
    // path to config file
    ifstream sconfigFile;
    // open config file
    sconfigFile.open(configTxt);
    if(!sconfigFile.is_open()){
        cout << "Failed to open: " << configTxt << endl;
    }
    
    return configurations;

}
