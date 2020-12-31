obj = main.o getline.o visible.o detab.o
cfg = -std=c11 -Wall -pedantic

detab: $(obj)
	gcc $(cfg) -o detab $(obj)

$(obj): detab.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf detab $(obj)

