//
// Created by Kristen Schneider on 1/01/22.
//

#ifndef CPRACTICE_GZIP_H
#define CPRACTICE_GZIP_H

#endif //CPRACTICE_GZIP_H

#include <sstream>
#include "../lib/boost_1_78_0/boost/iostreams/filtering_streambuf.hpp"
#include "../lib/boost_1_78_0/boost/iostreams/copy.hpp"
#include "../lib/boost_1_78_0/boost/iostreams/filter/gzip.hpp"

int gzipCompress(int argc, char** argv);

class Gzip {
public:
    static std::string compress(const std::string& data)
    {
        namespace bio = boost::iostreams;

        std::stringstream compressed;
        std::stringstream origin(data);

        bio::filtering_streambuf<bio::input> out;
        out.push(bio::gzip_compressor(bio::gzip_params(bio::gzip::best_compression)));
        out.push(origin);
        bio::copy(out, compressed);

        return compressed.str();
    }

    static std::string decompress(const std::string& data)
    {
        namespace bio = boost::iostreams;

        std::stringstream compressed(data);
        std::stringstream decompressed;

        bio::filtering_streambuf<bio::input> out;
        out.push(bio::gzip_decompressor());
        out.push(compressed);
        bio::copy(out, decompressed);

        return decompressed.str();
    }
};