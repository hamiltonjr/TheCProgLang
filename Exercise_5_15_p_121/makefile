OBJECTS  = main.o alloc.o atof.o getline.o numcmp.o numcmp_r.o strcmp_r.o qsort.o readlines.o writelines.o tolower.o
CFLAGS   = -std=c11 -Wall -pedantic
COMPILER = gcc
SOFTWARE = test 

$(SOFTWARE): $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o $(SOFTWARE) $(OBJECTS)

$(OBJECTS): utils.h
	$(COMPILER) $(CFLAGS) -c $*.c

clean:
	rm -rf $(SOFTWARE) $(OBJECTS)

