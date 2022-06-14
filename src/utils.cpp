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

int get_data_type(string sData){
    int dataType;
    
    // hierarchically find natural data type
    // 1. try to cast to int
    if (sData.find(".") == string::npos){
        try{
            int iData = stoi(sData);
            return 1;//"int";
        } catch(const std::exception& e){
            // 2. Check if true/false
            string t = "true";
            string f = "false";
            bool trueFalse = false;    
    
            for (int i = 0; i < sData.length(); i++){
                if ((tolower(sData[i]) == t[i] || tolower(sData[i]) == f[i]) && sData.length() > 1){
                    trueFalse = true;
                } else{trueFalse = false;}
            }
            if (trueFalse){ return 4; }//"bool";}
            // 3. return string if nothing else
            else{ return 3; }//"string";}
        }
    }
    // 4. Try to cast as float
    else if(sData.find(".") != string::npos){
        try{
            int fData = stof(sData);
            return 2;//"float";
        } catch(const std::exception& e){}
    }
    return dataType;
}

