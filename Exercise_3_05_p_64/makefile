obj = main.o itob.o reverse.o
cfg = -std=c11 -Wall -pedantic

itob: $(obj)
	gcc $(cfg) -o itob $(obj)

$(obj): itob.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf itob $(obj)

