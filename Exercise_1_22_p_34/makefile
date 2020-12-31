obj = main.o getline.o fold.o
cfg = -std=c11 -Wall -pedantic

fold: $(obj)
	gcc $(cfg) -o fold $(obj)

$(obj): fold.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf fold $(obj)

