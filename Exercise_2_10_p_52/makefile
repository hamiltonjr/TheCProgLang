obj = main.o lower.o tolower.o
cfg = -std=c11 -Wall -pedantic

lower: $(obj)
	gcc $(cfg) -o lower $(obj)

$(obj): lower.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf lower $(obj)
