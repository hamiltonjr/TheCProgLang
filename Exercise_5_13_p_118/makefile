	OBJECTS  = main.o getline.o readlines.o writelines.o alloc.o atoi.o
CFLAGS   = -std=c11 -Wall -pedantic
COMPILER = gcc
SOFTWARE = tail 

$(SOFTWARE): $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o $(SOFTWARE) $(OBJECTS)

$(OBJECTS): utils.h
	$(COMPILER) $(CFLAGS) -c $*.c

clean:
	rm -rf $(SOFTWARE) $(OBJECTS)

