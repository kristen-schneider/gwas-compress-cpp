#include <string>
#include "../lib/boost_1_78_0/boost/iostreams/filtering_streambuf.hpp"
#include "../lib/boost_1_78_0/boost/iostreams/copy.hpp"
#include "../lib/boost_1_78_0/boost/iostreams/filter/gzip.hpp"

using namespace std;
using namespace boost::iostreams;

string gzipCompress(string data) {
    filtering_streambuf<boost::iostreams::output> outbuf;
    gzip_compressor();
}