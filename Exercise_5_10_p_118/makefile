OBJECTS  = main.o atof.o stack.o 
CFLAGS   = -std=c11 -Wall -pedantic
COMPILER = gcc
SOFTWARE = test 

$(SOFTWARE): $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o $(SOFTWARE) $(OBJECTS)

$(OBJECTS): utils.h
	$(COMPILER) $(CFLAGS) -c $*.c

clean:
	rm -rf $(SOFTWARE) $(OBJECTS)

