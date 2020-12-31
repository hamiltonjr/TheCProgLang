obj = main.o getline.o strrindex.o
cfg = -std=c11 -Wall -pedantic

xgrep: $(obj)
	gcc $(cfg) -o xgrep $(obj)

$(obj): pattern.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf xgrep pattern $(obj)

