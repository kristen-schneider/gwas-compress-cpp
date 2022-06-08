//
// Created by Kristen Schneider on 2/22/22.
//

#ifndef GWAS_CPP_GWASFILE_H
#define GWAS_CPP_GWASFILE_H


#include <string>
#include <vector>
using namespace std;



class GWASFile{
private:
    // attributes of file
    int numColumns;
    string delimiter;
public:
    GWASFile(int numColumns, string delimiter);

    // setters
    void setNumColumns(int setNumColumns);
    void setFileDelimiter(string setFileDelimiter);

    // getters
    int getNumColumns(string gwasFileName) { return numColumns;};
    string getFileDelimiter(string gwasFileName) { return delimiter;};
};


#endif //GWAS_CPP_GWASFILE_H
