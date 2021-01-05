obj = main.o print.o bsearch.o fast_bsearch.o
cfg = -std=c11 -Wall -pedantic

bs: $(obj)
	gcc $(cfg) -o bs $(obj)

$(obj): bsearch.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf bs $(obj)
