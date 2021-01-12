OBJECTS  = main.o alloc.o atof.o getline.o lower.o numcmp.o compare.o qsort.o readlines.o writelines.o
COMPILER = gcc
CFLAGS   = -Wall
SOFTWARE = sort

$(SOFTWARE): $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o $(SOFTWARE) $(OBJECTS)

$(OBJECTS): utils.h
	$(COMPILER) $(CFLAGS) -c $*.c

clean:
	rm -rf $(SOFTWARE) $(OBJECTS)
