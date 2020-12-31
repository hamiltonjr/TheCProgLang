obj = main.o squeeze.o strsqz.o
cfg = -std=c11 -Wall -pedantic

sqz: $(obj)
	gcc $(cfg) -o sqz $(obj)

$(obj): squeeze.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf sqz $(obj)

