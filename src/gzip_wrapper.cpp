#include <string>
#include <../lib/boost_1_78_0/boost/iostreams/filtering_streambuf.hpp>
#include <../lib/boost_1_78_0/boost/iostreams/copy.hpp>
#include <../lib/boost_1_78_0/boost/iostreams/filter/gzip.hpp>
#include <../lib/boost_1_78_0/libs/iostreams/src/zlib.cpp>
#include <../lib/boost_1_78_0/libs/iostreams/src/gzip.cpp>

using namespace std;
using namespace boost::iostreams;

//string gzipCompress(string data){return "";}

string gzipCompress(string data) {
    filtering_streambuf<output> outbuf;
    gzip_compressor();
    return "";
}