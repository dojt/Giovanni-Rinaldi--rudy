# Makefile for compiling rudy (courtesy of Bing Copilot)

# Compiler
CC = cc

# Source files
SRC = rudy.c gb_lib.c

# Output executable
OUT = rudy

# Libraries
LIBS = -lm

# Default target
all: $(OUT)

# Rule to build the executable
$(OUT): $(SRC)
	$(CC) $(SRC) $(LIBS) -o $(OUT)

# Clean target to remove the executable
clean:
	rm -f $(OUT)
