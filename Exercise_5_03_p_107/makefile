obj = main.o strcat.o
cfg = -std=c11 -Wall -pedantic

concat: $(obj)
	gcc $(cfg) -o concat $(obj)

$(obj): strutil.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf concat $(obj)

