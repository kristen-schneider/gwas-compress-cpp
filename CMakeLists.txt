cmake_minimum_required(VERSION 3.17)
project(gwas_cpp)

set(CMAKE_CXX_STANDARD 14)

set(BOOST ./lib/boost)
set(BOOST_2 ./lib/boost_1_78_0)
set(SRC ./src/)

set(Zlib_INCLUDE_DIR /Users/kristen/CLionProjects/gwas-cpp/lib/zlib/include)
set(Zlib_LIBRARY_DIR /Users/kristen/CLionProjects/gwas-cpp/lib/zlib/lib)
set(Boost_INCLUDE_DIR /Users/kristen/CLionProjects/gwas-cpp/lib/boost)
set(Boost_LIBRARY_DIR /Users/kristen/CLionProjects/gwas-cpp/lib/boost/lib)
set(Boost_INCLUDE_DIR_2 /Users/kristen/CLionProjects/gwas-cpp/lib/boost_1_78_0)
set(Boost_LIBRARY_DIR_2 /Users/kristen/CLionProjects/gwas-cpp/lib/boost1_78_0/libs)

include_directories(${SRC})
include_directories(${BOOST})
include_directories(${BOOST_2})
include_directories(${ZLIB})

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)

include_directories(/Users/kristen/CLionProjects/gwas-cpp/lib/boost_1_78_0/libs/iostreams/src/)


set(
        SOURCE
        ${SRC}/funnelFormat.cpp
        ${SRC}/funnelFormat.h
        ${SRC}/funnelFormatCompress.cpp
        ${SRC}/funnelFormatCompress.h
        ${SRC}/gzipWrapper.cpp
        ${SRC}/gzipWrapper.h
        ${SRC}/main.cpp
        ${SRC}/utils.cpp
        ${SRC}/utils.h)


find_package(Boost COMPONENTS system filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIR} ${Boost_INCLUDE_DIR_2} ${Zlib_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR} ${Boost_LIBRARY_DIR_2} ${Zlib_LIBRARY_DIR})

add_executable(gwas_cpp ${SOURCE})
target_link_libraries( gwas_cpp ${Boost_INCLUDE_DIR} ${Boost_INCLUDE_DIR_2}
                        ${Boost_INCLUDE_DIR_2} ${Boost_LIBRARIES_2}
                        ${Zlib_INCLUDE_DIR} ${Zlib_LIBRARY_DIR}
                        -lz)

