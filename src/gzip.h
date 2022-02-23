//
// Created by Kristen Schneider on 1/01/22.
//

#ifndef CPRACTICE_GZIP_H
#define CPRACTICE_GZIP_H

#endif //CPRACTICE_GZIP_H

#include <sstream>
#include <../lib/boost_1_78_0/boost/iostreams/filtering_streambuf.hpp>
#include <../lib/boost_1_78_0/boost/iostreams/copy.hpp>
#include <../lib/boost_1_78_0/boost/iostreams/filter/gzip.hpp>

int gzipCompress(int argc, char** argv);