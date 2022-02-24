#include <iostream>
#include <string>
#include <../lib/boost_1_78_0/boost/iostreams/filtering_streambuf.hpp>
#include <../lib/boost_1_78_0/boost/iostreams/filtering_stream.hpp>
#include <../lib/boost_1_78_0/boost/iostreams/copy.hpp>
#include <../lib/boost_1_78_0/boost/iostreams/filter/gzip.hpp>
#include <../lib/boost_1_78_0/libs/iostreams/src/zlib.cpp>
#include <../lib/boost_1_78_0/libs/iostreams/src/gzip.cpp>

using namespace std;
using namespace boost::iostreams;


string gzipCompress(string data) {
    string compressedString;
    {
        filtering_ostream compressingStream;
        compressingStream.push(gzip_compressor(gzip_params(gzip::best_compression)));
        compressingStream.push(boost::iostreams::back_inserter(compressedString));
        compressingStream << data;
        close(compressingStream);
    }

    // return compressed string without header
    return compressedString.substr(10);
}

string gzipDecompress(string compressedData){
    string decompressedString;
    {
        filtering_ostream decompressingStream;
        decompressingStream.push(gzip_decompressor());
        decompressingStream.push(boost::iostreams::back_inserter(decompressedString));
        decompressingStream << compressedData;
        close(decompressingStream);
    }

    return decompressedString;
}

string returnGzipHeader(){
    // return gzip header (same for all input streams)
    string compressedString;
    {
        filtering_ostream compressingStream;
        compressingStream.push(gzip_compressor(gzip_params(gzip::best_compression)));
        compressingStream.push(boost::iostreams::back_inserter(compressedString));
        compressingStream << "";
        close(compressingStream);
    }
    return compressedString.substr(0,10);
}

