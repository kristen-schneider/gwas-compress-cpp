cmake_minimum_required(VERSION 3.17)
project(gwas_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)

#set(SRC ./src/)
#
#set(Zlib_INCLUDE_DIR /Users/kristen/CLionProjects/gwas-cpp/lib/zlib/include)
#set(Zlib_LIBRARY_DIR /Users/kristen/CLionProjects/gwas-cpp/lib/zlib/lib)
#
#include_directories(${SRC})
#include_directories(${ZLIB})
#
#add_subdirectory(src)
#add_subdirectory(test)
#add_subdirectory(lib/googletest)
#
#
#
#set(
#        SOURCE
#        ${SRC}/funnelFormat.cpp
#        ${SRC}/funnelFormat.h
#        ${SRC}/funnelFormatCompress.cpp
#        ${SRC}/funnelFormatCompress.h
#        ${SRC}/gzipWrapper.cpp
#        ${SRC}/gzipWrapper.h
#        ${SRC}/main.cpp
#        ${SRC}/utils.cpp
#        ${SRC}/utils.h)
#
#
#include_directories(${Zlib_INCLUDE_DIR})
#link_directories(${Zlib_LIBRARY_DIR})
#
#add_executable(gwas_cpp ${SOURCE})
#target_link_libraries(gwas_cpp
#                        ${Zlib_INCLUDE_DIR} ${Zlib_LIBRARY_DIR}
#                        -lz)

