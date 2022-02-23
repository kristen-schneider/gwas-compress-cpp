# paths
UNITY_ROOT=./Unity
SRC=../src
DEP=../src
CC=gcc

_DEPS = gzip.h \
	header_first_half.h \
	funnel_format.h \
	utils.h
DEPS = $(addprefix $(DEP)/, $(_DEPS))

TEST_SRC=$(wildcard *.cpp)
TEST_NAMES=$(TEST_SRC:.cpp=)
PREFIX=Runner_
RUNNERS=$(addprefix $(PREFIX),$(TESTS))

NO_PRE_SRC_FILES= gzip.cpp \
	header_first_half.cpp \
	funnel_format.cpp \
	utils.cpp

SRC_FILES=$(addprefix $(SRC)/, $(NO_PRE_SRC_FILES))

all: clean $(TEST_NAMES) test

%: %.c
	ruby $(UNITY_ROOT)/auto/generate_test_runner.rb $@.cpp
	$(CC) -Werror -g -o $@ \
	    -I$(UNITY_ROOT)/src/ \
	    -I$(SRC) \
	    -DTEST $(UNITY_ROOT)/src/unity.c \
	    $(SRC_FILES) \
	    $@.cpp $@_Runner.cpp \
	    -lhts \
	    -lz

test:
	$(foreach var,$(TEST_NAMES),./$(var);)

clean:
	rm -f $(TEST_NAMES)
	rm -f *_Runner.cpp
	rm -rf *dSYM/