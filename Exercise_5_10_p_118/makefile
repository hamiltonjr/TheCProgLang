OBJECTS  = main.o a2f.o stack.o 
CFLAGS   = -std=c11 -Wall -pedantic
COMPILER = gcc
SOFTWARE = expr

$(SOFTWARE): $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o $(SOFTWARE) $(OBJECTS)

$(OBJECTS): utils.h
	$(COMPILER) $(CFLAGS) -c $*.c

clean:
	rm -rf $(SOFTWARE) $(OBJECTS)
