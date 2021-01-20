obj = main.o getop.o stack.o getch.o atof.o
cfg = -std=c11 -Wall -pedantic
lib = -lm

calc: $(obj)
	gcc $(cfg) -o calc $(obj) $(lib)

$(obj): calc.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf calc $(obj)

