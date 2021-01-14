obj = main.o strindex.o strrindex.o
cfg = -std=c11 -Wall -pedantic
lib = ../lib/utils.a

xgrep: $(obj)
	gcc $(cfg) -o xgrep $(obj) $(lib)

$(obj): pattern.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf xgrep $(obj)
