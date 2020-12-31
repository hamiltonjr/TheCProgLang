obj = main.o expand.o
cfg = -std=c11 -Wall -pedantic

xp: $(obj)
	gcc $(cfg) -o xp $(obj)

$(obj): expand.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf xp $(obj)

