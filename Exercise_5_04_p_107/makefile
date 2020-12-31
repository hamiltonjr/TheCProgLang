obj = main.o strend.o
cfg = -std=c11 -Wall -pedantic

strend: $(obj)
	gcc $(cfg) -o strend $(obj)

$(obj): strutil.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf strend $(obj)

