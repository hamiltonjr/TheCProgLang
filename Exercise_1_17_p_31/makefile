obj = main.o getline.o copy.o
cfg = -std=c11 -Wall -pedantic

gt80: $(obj)
	gcc $(cfg) -o gt80 $(obj)

$(obj): gt80.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf gt80 $(obj)

