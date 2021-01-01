obj = main.o visible.o detab.o
cfg = -std=c11 -Wall -pedantic
lib = ../lib/utils.a

detab: $(obj)
	gcc $(cfg) -o detab $(obj) $(lib)

$(obj): detab.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf detab $(obj)
