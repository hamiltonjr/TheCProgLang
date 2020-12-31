obj = main.o getop.o stack.o getch.o atof.o
cfg = -std=c11 -Wall -pedantic

calc: $(obj)
	gcc $(cfg) -o calc $(obj)

$(obj): calc.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf calc $(obj)

