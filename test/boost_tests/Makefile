# the compiler
CC = g++

# compiler flags:
#  -g: adds debugging information to the executable file
#  -Wall: turn on most compiler warnings
#  -lboost_unit_test_framework: to use Boost unit test framework
CFLAGS  = -g \
	-Wall \
	-lboost_unit_test_framework \
	-lz \

INCLUDE=../../src
_INCLUDE_FILES = utils.cpp \
	gzipWrapper.cpp

TARGET = tests

TEST_FILES = test_main.cpp \
	test_utils.cpp \
	test_gzipWrapper.cpp

INCLUDE_FILES = $(addprefix $(INCLUDE)/, $(_INCLUDE_FILES))

all: $(TARGET)

$(TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(TEST_FILES) $(INCLUDE_FILES)

clean:
	$(RM) $(TARGET)
