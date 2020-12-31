obj = main.o any.o
cfg = -std=c11 -Wall -pedantic

any: $(obj)
	gcc $(cfg) -o any $(obj)

$(obj): any.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf any $(obj)

