PROJECT_NAME = s21_math

# compiler
CC = gcc

# directory names
OBJ_DIR = ./obj
GCOV_OBJ_DIR = ./obj/gcov
TEST_OBJ_DIR = ./obj/tests
MODULES_DIR = ./modules
TEST_DIR = ./tests
REPORT_DIR = ./report

# main flags for compiler
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c11 -g

# additional libraries for linking
LDFLAGS = -lcheck -lsubunit -lgcov -lm

# additional libraries for linking gcov
LDGCOV = $(LDFLAGS) -lgcov

# flags for gcov
GCOV_FLAGS = -fprofile-arcs -ftest-coverage

# target names
LIBRARY = $(PROJECT_NAME).a
TARGET = test

# main header
MAIN_H = $(shell find ./ -maxdepth 1 -name "*.h")

# list of files and directories in the modules
MODULES_DIRS = $(shell find $(MODULES_DIR) -type d)
MODULES_C = $(notdir $(shell find $(MODULES_DIR) -type f -name "*.c"))
MODULES_H = $(shell find $(MODULES_DIR) -type f -name "*.h")
MODULES_O = $(MODULES_C:%.c=%.o) 

# list of files and directories in the modules
TEST_DIRS = $(shell find $(TEST_DIR) -type d)
TEST_C = $(notdir $(shell find $(TEST_DIR) -type f -name "*.c"))
TEST_H = $(shell find $(TEST_DIR) -type f -name "*.h")
TEST_O = $(addprefix $(TEST_OBJ_DIR)/, $(notdir $(TEST_C:%.c=%.o)))

# list of all files for clang-format and cppcheck
C_FILES = $(MODULES_C) $(TEST_C)
H_FILES = $(MODULES_H) $(MAIN_H) $(TEST_H)
ALL_FILES = $(C_FILES) $(H_FILES)

vpath %.c $(MODULES_DIRS) : $(TEST_DIRS)
vpath %.o $(OBJ_DIR)

# targets
all: dvi $(TARGET)

$(LIBRARY): $(OBJ_DIR) $(MODULES_O) $(MODULES_H) $(MAIN_H)
	ar rcs $@ $(addprefix $(OBJ_DIR)/, $(MODULES_O))
	ranlib $(LIBRARY)

$(TARGET): $(LIBRARY) $(TEST_OBJ_DIR) $(TEST_O)
	$(CC) $(TEST_O) $(LIBRARY) $(LDFLAGS) -o $@
	./$@

%.o: %.c $(H_FILES)
	$(CC) $(CFLAGS) -c -o $(addprefix $(OBJ_DIR)/, $@) $<

$(TEST_OBJ_DIR)/%.o : %.c $(TEST_H)
	$(CC) $(CFLAGS) -c -o $@ $<

$(GCOV_OBJ_DIR)/%.o : %.c $(ALL_H)
	$(CC) $(CFLAGS) $(GCOV_FLAGS) -o $@ $<

# create directories
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(GCOV_OBJ_DIR):
	mkdir -p $(GCOV_OBJ_DIR)

$(TEST_OBJ_DIR):
	mkdir -p $(TEST_OBJ_DIR)

$(REPORT_DIR):
	mkdir -p $(REPORT_DIR)

debug:
	$(CC) $(CFLAGS) $(LDFLAGS) main.c -o main

dvi:
	rm -rf ./../docs
	doxygen Doxyfile

rebuild: clean all

clang:
	clang-format -style=Google -n $(ALL_FILES)

check:
	clang-format -style=Google -i $(ALL_FILES)

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem $(ALL_FILES)

valgrind:
	valgrind --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all -s ./$(TARGET)

install:
	sudo apt install cppcheck
	sudo apt install clang-format
	sudo apt-get install check

clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(REPORT_DIR)
	rm -f *.a *.o
	rm -f *.c.gcov *.gcno *.gcov *.gcda output.info
	rm -f main
