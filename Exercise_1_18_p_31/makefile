obj = main.o getline.o
cfg = -std=c11 -Wall -pedantic

sqz: $(obj)
	gcc $(cfg) -o sqz $(obj)

$(obj): trailing.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf sqz $(obj)

