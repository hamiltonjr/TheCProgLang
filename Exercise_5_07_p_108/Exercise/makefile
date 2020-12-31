OBJECTS   = main.o getline.o readlines.o writelines.o qsort.o
CFLAGS    = -std=c11 -w
COMPILER  = gcc
SOFTWARE  = test

$(SOFTWARE): $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o $(SOFTWARE) $(OBJECTS)

$(ONJECTS): utils.h
	$(COMPILER) $(CFLAGS) -c $*.c

clean:
	rm -rf $(SOFTWARE) $(OBJECTS)

