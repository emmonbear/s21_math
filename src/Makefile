##############################################################################################################
#                                          VARIABLES                                                         #
##############################################################################################################


#========================================= COMPILER =========================================================#
PROJECT_NAME = s21_math
CC = gcc
#============================================================================================================#


#======================================= DIRECTORY NAMES ====================================================#
OBJ_DIR = ./obj
GCOV_OBJ_DIR = ./obj/gcov
TEST_OBJ_DIR = ./obj/tests
MODULES_DIR = ./modules
TEST_DIR = ./tests
REPORT_DIR = ./report
DVI_DIR = ./../docs
#============================================================================================================#


#========================================== FLAGS ===========================================================#
# MAIN FLAGS FOR COMPILER																					 
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c11 -g

# CHECK LIBRARIES FOR LINKING
LDFLAGS = -lcheck -lsubunit -lm

# CHECK & GCOV LIBRARIES FOR LINKING GCOV
LDGCOV = $(LDFLAGS) -lgcov

# FLAGS FOR COVERING MODULES
GCOV_FLAGS = -fprofile-arcs -ftest-coverage

# FLAGS FOR VALGRING TEST
VAL = --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all -s

# FLAGS FOR CPPCHECK TEST
CPPCHECK = --enable=all --suppress=missingIncludeSystem
#============================================================================================================#


#======================================= TARGET NAMES =======================================================#
LIBRARY = $(PROJECT_NAME).a
TARGET = test
GCOV = gcov_report
#============================================================================================================#


#======================================= MAIN HEADER ========================================================#
MAIN_H = $(shell find ./ -maxdepth 1 -name "*.h")
#============================================================================================================#


#============================== LIST OF FILE AND DIRS IN MODULES ============================================#
MODULES_DIRS = $(shell find $(MODULES_DIR) -type d)
MODULES_C = $(notdir $(shell find $(MODULES_DIR) -type f -name "*.c"))
MODULES_H = $(shell find $(MODULES_DIR) -type f -name "*.h")
MODULES_O = $(MODULES_C:%.c=%.o)
#============================================================================================================#


#============================ LIST OF FILE AND DIRS IN TEST MODULES =========================================#
TEST_DIRS = $(shell find $(TEST_DIR) -type d)
TEST_C = $(notdir $(shell find $(TEST_DIR) -type f -name "*.c"))
TEST_H = $(shell find $(TEST_DIR) -type f -name "*.h")
TEST_O = $(addprefix $(TEST_OBJ_DIR)/, $(notdir $(TEST_C:%.c=%.o)))
#============================================================================================================#

#========================== LIST OF FILES TO CLANG-FORMAT AND CPPCHECK ======================================#
C_FILES = $(MODULES_C) $(TEST_C)
H_FILES = $(MODULES_H) $(MAIN_H) $(TEST_H)
ALL_FILES = $(C_FILES) $(H_FILES)
#============================================================================================================#


#======================== CONFIGURING PATH TO SEARH FOR UNPREFIXED PATHS ====================================#
vpath %.c $(MODULES_DIRS) : $(TEST_DIRS)
vpath %.o $(OBJ_DIR)
#============================================================================================================#





##############################################################################################################
#                                           TARGETS                                                          #
##############################################################################################################


#======================================== MAIN TARGETS ======================================================#
all: dvi $(TARGET)

$(LIBRARY): $(OBJ_DIR) $(MODULES_O) $(MODULES_H) $(MAIN_H)
	ar rcs $@ $(addprefix $(OBJ_DIR)/, $(MODULES_O))
	ranlib $@

$(TARGET): $(LIBRARY) $(TEST_OBJ_DIR) $(TEST_O)
	$(CC) $(TEST_O) $(LIBRARY) $(LDFLAGS) -o $@
	./$@

$(GCOV): $(REPORT_DIR) $(TEST_OBJ_DIR) $(TEST_O)
	$(CC) $(TEST_O) $(addprefix $(MODULES_DIR)/,$(MODULES_C)) $(LDFLAGS) $(GCOV_FLAGS) -o $(TARGET)
	./$(TARGET)
	gcovr -r . --html --html-details -o $(REPORT_DIR)/coverage.html
	xdg-open $(REPORT_DIR)/coverage.html

dvi:
	rm -rf $(DVI_DIR)
	doxygen Doxyfile
	xdg-open $(DVI_DIR)/html/index.html

clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(REPORT_DIR)
	rm -rf $(DVI_DIR)
	rm -rf $(GCOV)
	rm -f $(TARGET)
	rm -f *.a *.o
	rm -f *.gc*
	rm -f main
	rm -f val.txt

rebuild: clean all
#============================================================================================================#


#==================================== CREATE DIRECTORIES ====================================================#
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(TEST_OBJ_DIR):
	mkdir -p $(TEST_OBJ_DIR)

$(REPORT_DIR):
	mkdir -p $(REPORT_DIR)
#============================================================================================================#


#==================================== OBJECTIVE TARGETS =====================================================#
%.o: %.c $(H_FILES)
	$(CC) $(CFLAGS) -c -o $(addprefix $(OBJ_DIR)/, $@) $<

$(TEST_OBJ_DIR)/%.o : %.c $(TEST_H)
	$(CC) $(CFLAGS) -c -o $@ $<
#============================================================================================================#


#====================================== CHECKS TARGETS ======================================================#
debug: $(LIBRARY)
	@$(CC) main.c $(LIBRARY) -o main -lm
	@./main

clang_check:
	clang-format -style=Google -n $(ALL_FILES)

clang_fix:
	clang-format -style=Google -i $(ALL_FILES)

cppcheck:
	$@ $(CPPCHECK) $(ALL_FILES)

valgrind: $(TARGET)
	@$@ $(VAL) ./$(TARGET) > val.txt 2>&1 && \
	{ \
		echo; \
		echo "#########################################################################"; \
		echo "#                        Valgrind test results:                         #"; \
		echo "#                       Passed tests $$(grep "ERROR SUMMARY: 0" -c val.txt) from $$(grep "ERROR SUMMARY:" -c val.txt)                       #"; \
		echo "#########################################################################"; \
		echo; \
	}
#============================================================================================================#

#==================================== ADDITIONAL TARGETS ====================================================#
install:
	sudo apt install cppcheck
	sudo apt install clang-format
	sudo apt-get install check
	sudo apt install doxygen
	sudo apt-get install graphviz
	sudo apt-get install texlive

#============================================================================================================#
