obj = main.o escape.o unescape.o
cfg = -std=c11 -Wall -pedantic

vis: $(obj)
	gcc $(cfg) -o vis $(obj)

$(obj): visible.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf vis $(obj)

