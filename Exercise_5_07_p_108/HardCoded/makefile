OBJECTS   = main.o readLines.o getLine.o writeLines.o quickSort.o
CFLAGS    = -std=c11 -Wall -pedantic

test: $(OBJECTS)
	gcc $(CFLAGS) -o test $(OBJECTS)

$(ONJECTS):
	gcc $(CFLAGS) -c $*.c

clean:
	rm -rf test $(OBJECTS)
