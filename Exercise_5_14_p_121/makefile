OBJECTS  = main.o alloc.o a2f.o lower.o numCmp.o compare.o qSort.o readLines.o writeLines.o
COMPILER = gcc
CFLAGS   = -Wall
LIBRARY  = ../lib/utils.a
SOFTWARE = sort

$(SOFTWARE): $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o $(SOFTWARE) $(OBJECTS) $(LIBRARY)

$(OBJECTS): utils.h
	$(COMPILER) $(CFLAGS) -c $*.c

clean:
	rm -rf $(SOFTWARE) $(OBJECTS)
