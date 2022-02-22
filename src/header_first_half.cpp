//
// Created by Kristen Schneider on 1/27/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "../include/header_first_half.h"

/*
 * INPUT: GWAS file
 * OUTPUT: first half of compression header
 *
 * Generates a list of data which is will provide information
 * to aid in decompression.
 *
 * 1. magic number: magic_number
 * 2. version number: version_number
 * 3. delimiter: delimiter
 * 4. file header: file_header
 * 5. original column types: og_col_types
 * 6. number of columns: num_cols
 */
//int main(){
//    printf("Hello, World!");
//    return 0;
//}

int generate_header_first_half(char gwas_file_name[])
{
    // initializing header
    char header_first_half[6];

    // initializing file variables
    FILE * gwas_file_ptr;
    int buffer_length = 255;
    char line[buffer_length];

    // open file
    gwas_file_ptr = fopen(gwas_file_name, "r");

    // bad file
    if( gwas_file_ptr == NULL )
    {
        printf("File cannot be opened.");
        return -1;
    }
    // good file
    else
    {
        // read line by line
        while( fgets( line, buffer_length, gwas_file_ptr) )
        {
            printf("Read line:\n%s", line);
        }
    }

    //close file
    fclose(gwas_file_ptr);

    return 0;
}
