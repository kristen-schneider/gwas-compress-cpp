#!/bin/sh

root_dir="/home/krsc0813/gwas-compress-cpp/"
src_dir=$root_dir"src/"
bin_dir=$root_dir"bin/"
gwas_dir=$root_dir"gwas_files/"
txt_dir=$root_dir"txt_files/"

gwas_file=$data_dir""

echo "Starting Program."
for index in {0..3}
do


    # for 3 differnt kinds of indexes
    echo "INDEX: " $index

    # for segment lengths 100-1000 (100 step)
    for segment_length in {100..1000..100}
    do
        echo "SEGMENT LENGTH: $segment_length"

        bin=$bin_dir"index"$index"-length"$segment_length
        
        g++ $src_dir"main.cpp" -o $bin  # compile code
        $bin $index $segment_length     # execute binary

    done
    echo
done
