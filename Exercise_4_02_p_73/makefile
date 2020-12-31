obj = main.o getline.o atof.o
cfg = -std=c11 -Wall -pedantic

calc: $(obj)
	gcc $(cfg) -o calc $(obj)

$(obj): atof.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf calc $(obj)

