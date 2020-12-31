obj = main.o reverse.o
cfg = -std=c11 -Wall -pedantic

rev: $(obj)
	gcc $(cfg) -o rev $(obj)

$(obj): reverse.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf rev $(obj)

