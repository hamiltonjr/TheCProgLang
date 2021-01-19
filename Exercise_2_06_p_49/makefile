obj = main.o getBits.o setBits.o binary.o
cfg = -std=c11 -Wall

bits: $(obj)
	gcc $(cfg) -o bits $(obj)

$(obj): bits.h
	gcc $(cfg) -c $*.c

clean:
	rm bits $(obj)
