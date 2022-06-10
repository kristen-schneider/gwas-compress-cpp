//
// Created by Kristen Schneider on 2/22/22.
//
#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <typeinfo>

#include "utils.h"
using namespace std;

string* read_first_two_lines(string inFile, string* lineArrray){
    string firstLine;
    string secondLine;

    ifstream iFile;
    iFile.open(inFile);
    if(!iFile.is_open()){
        cerr << "Failed to open: " << inFile << endl;
    }else{
        getline(iFile, firstLine);
        getline(iFile, secondLine);
    }
    iFile.close();
    iFile.seekg(0);
    iFile.clear();
    
    lineArrray[0] = firstLine;
    lineArrray[1] = secondLine;
    return lineArrray;
}

string get_data_type(string sData){
    string dataType;
    
    // hierarchically find natural data type
    // 1. try to cast to int
    if (sData.find(".") == string::npos){
        try{
            int iData = stoi(sData);
            return "int";
        } catch(const std::exception& e){
            // 2. Check if true/false
            string t = "true";
            string f = "false";
            bool trueFalse = false;    
    
            for (int i = 0; i < sData.length(); i++){
                if (tolower(sData[i]) == t[i] || tolower(sData[i]) == f[i]){
                    trueFalse = true;
                } else{trueFalse = false;}
            }
            if (trueFalse){ return "bool";}
            // 3. return string if nothing else
            else{ return "string";}
        }
    }
    // 4. Try to cast as float
    else if(sData.find(".") != string::npos){
        try{
            int fData = stof(sData);
            return "float";
        } catch(const std::exception& e){}
    }
    return dataType;
}
