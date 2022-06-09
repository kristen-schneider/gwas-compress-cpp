#include <fstream>
#include <iostream>
#include <string>

#include "headerPart1.h"

using namespace std;

/*
 * returns an array of pointers to header part1 data
 *
 * magic number: int
 * version number: int
 * delimiter: char
 * column names: array of strings
 * decompression column types: array of ints
 * num columns: int
*/

HeaderPart1 make_header_part1(string gwasFile){
    HeaderPart1 headerPart1;
    headerPart1.magicNumber = magic_number();
    headerPart1.versionNumber = version_number();
    headerPart1.delimiter = detect_delimiter(gwasFile); 
    
    // print header
    cout << "File Header: " << endl;
    cout << "\tMagic Number: " << headerPart1.magicNumber << endl;
    cout << "\tVersion Number: " << headerPart1.versionNumber << endl;
    cout << "\tDelimiter: ";
        if (headerPart1.delimiter == ' '){ cout << "space" << endl;}
        else{ cout << headerPart1.delimiter << endl;}
    cout << "\tNumber of Columns: " << headerPart1.numColumns << endl;
    cout << "\tColumn Names: " ;//<< headerPart1.magicNumber << endl;
    cout << "\tColumn Decompression Types: ";// << headerPart1.magicNumber << endl;

    return headerPart1;
}

int magic_number(){ return 1;}

int version_number(){ return 1;}

char detect_delimiter(string gwasFile){
    char delimiter;
    char delimiterCheck;
    
    ifstream gFile;
    gFile.open(gwasFile);
    
    if(!gFile.is_open()){
        cerr << "Failed to open: " << gwasFile << endl;
    }else{  
        string line;
        getline(gFile, line); 
        if (line.find(' ') != std::string::npos){
            delimiter = ' ';
        } else if(line.find('\t') != std::string::npos) {
            delimiter = '\t';
        } else if(line.find(',') != std::string::npos) {
            delimiter = ',';
        } else {cerr << "no delimiter detected.";}
            
    }
    gFile.close();  
    gFile.seekg(0);
    gFile.clear();
    return delimiter;
}

int number_of_columns(string gwasFile){
    int numColumns = 0;
    return numColumns;
}
