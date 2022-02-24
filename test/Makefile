# the compiler
CC = g++

# compiler flags:
#  -g: adds debugging information to the executable file
#  -Wall: turn on most compiler warnings
CFLAGS  = -g -Wall -lboost_unit_test_framework

INCLUDE = ../src
_INCLUDE_FILES = utils.cpp

TARGET = tests

TEST_FILES = test_main.cpp test_utils.cpp
INCLUDE_FILES = $(addprefix $(INCLUDE)/, $(_INCLUDE_FILES))

all: $(TARGET)

$(TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(TEST_FILES) $(INCLUDE_FILES)

clean:
	$(RM) $(TARGET)


#tests: test1.cpp test2.cpp test_utils.cpp main.cpp
#	g++ -o tests main.cpp test1.cpp test2.cpp test_utils.cpp -lboost_unit_test_framework
#
#clean:
#	rm tests
