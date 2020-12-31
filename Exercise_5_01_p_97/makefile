obj = main.o getch.o getint.o
cfg = -std=c11 -Wall -pedantic

get: $(obj)
	gcc $(cfg) -o get $(obj)

$(obj): gets.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf get $(obj)

