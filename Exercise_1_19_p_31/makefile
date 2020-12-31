obj = main.o getline.o reverse.o
cfg = -std=c11 -Wall -pedantic

reverse: $(obj)
	gcc $(cfg) -o reverse $(obj)

$(obj): reverse.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf reverse $(obj)

