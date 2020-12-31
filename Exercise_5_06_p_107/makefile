OBJECTS  = main.o atoi.o itoa.o reverse.o getline.o copy.o strindex.o
CFLAGS   = -std=c11 -Wall -pedantic
COMPILER = gcc

test: $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o test $(OBJECTS)

$(OBJECTS): utils.h
	$(COMPILER) $(CFLAGS) -c $*.c

clean:
	rm -rf print $(OBJECTS)

