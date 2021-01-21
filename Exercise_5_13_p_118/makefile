OBJECTS  = main.o readLines.o writeLines.o alloc.o a2i.o
CFLAGS   = -std=c11 -Wall -pedantic
COMPILER = gcc
SOFTWARE = tail
LIBRARY  = ../lib/utils.a

$(SOFTWARE): $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o $(SOFTWARE) $(OBJECTS) $(LIBRARY)

$(OBJECTS): utils.h
	$(COMPILER) $(CFLAGS) -c $*.c

clean:
	rm -rf $(SOFTWARE) $(OBJECTS)
