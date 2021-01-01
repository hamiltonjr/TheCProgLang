obj = main.o fold.o
cfg = -std=c11 -Wall -pedantic
lib = ../lib/utils.a

fold: $(obj)
	gcc $(cfg) -o fold $(obj) $(lib)

$(obj): fold.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf fold $(obj)
