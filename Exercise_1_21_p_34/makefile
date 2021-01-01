obj = main.o visible.o entab.o
cfg = -std=c11 -Wall -pedantic
lib = ../lib/utils.a

entab: $(obj)
	gcc $(cfg) -o entab $(obj) $(lib)

$(obj): entab.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf entab $(obj)
