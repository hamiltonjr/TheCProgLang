obj = main.o itoa.o
cfg = -std=c11 -Wall -pedantic
lib = ../lib/utils.a

itoa: $(obj)
	gcc $(cfg) -o itoa $(obj) $(lib)

$(obj): itoa.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf itoa $(obj)
