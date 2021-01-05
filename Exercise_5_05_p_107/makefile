obj = main.o strncat.o strncpy.o strncmp.o
cfg = -std=c11 -Wall -pedantic

test: $(obj)
	gcc $(cfg) -o test $(obj)

$(obj): strutil.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf test $(obj)
