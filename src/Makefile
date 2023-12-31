CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11 -pedantic 
GCOVFLAGS = -fprofile-arcs -ftest-coverage

LIB_NAME = s21_math.a
TARGET = test
GCOV_REPORT_DIR = gcov_report

SOURCES = $(wildcard CORE/*.c)
OBJECTS = $(SOURCES:.c=.o)
HEADER = s21_math.h
TEST_FILE = TESTS/tests.c

all: $(LIB_NAME) gcov_report $(TARGET)

$(LIB_NAME): $(OBJECTS) $(HEADER)
	ar rcs $@ $(OBJECTS)
	ranlib $(LIB_NAME)
	rm -rf $(OBJECTS)

$(TARGET): $(LIB_NAME) $(TEST_FILE)
	$(CC) $(CFLAGS) $(TEST_FILE) $(LIB_NAME) -o $(TARGET) -lcheck -lsubunit -lm
	./$(TARGET)

gcov_report: $(LIB_NAME) $(TEST_FILE)
	$(CC) $(CFLAGS) $(GCOVFLAGS) $(TEST_FILE) $(SOURCES) -o report -lcheck -lsubunit -lm -lgcov
	mkdir -p $(GCOV_REPORT_DIR)
	./report
	gcovr -r . --html --html-details -o gcov_report/coverage.html
	rm -rf $(OBJECTS) *.gc*

clean:
	@rm -rf $(OBJECTS) $(LIB_NAME) $(TARGET) *.gc* $(GCOV_REPORT_DIR) report

cpp:
	cppcheck $(SOURCES) $(TEST_FILE)

check:
	clang-format -style=Google -n *.h $(SOURCES) $(TEST_FILE)

valgrind:
	valgrind --error-limit=no --show-leak-kinds=all ./$(TARGET)

rebuld: clean all
