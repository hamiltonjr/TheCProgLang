OBJECTS  = main.o ...
CFLAGS   = -std=c11 -Wall -pedantic
LIBRARY  = ../lib/utils.a
COMPILER = gcc
SOFTWARE = test 

$(SOFTWARE): $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o $(SOFTWARE) $(OBJECTS) $(LIBRARY)

$(OBJECTS): utils.h
	$(COMPILER) $(CFLAGS) -c $*.c

clean:
	rm -rf $(SOFTWARE) $(OBJECTS)

