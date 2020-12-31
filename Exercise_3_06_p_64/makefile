obj = main.o itoa.o reverse.o
cfg = -std=c11 -Wall -pedantic

itoa: $(obj)
	gcc $(cfg) -o itoa $(obj)

$(obj): itoa.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf itoa $(obj)

