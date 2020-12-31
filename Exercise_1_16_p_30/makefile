obj = main.o getline.o copy.o
cfg = -std=c11 -Wall -pedantic

longest: $(obj)
	gcc $(cfg) -o longest $(obj)

$(obj): longest.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf longest $(obj)

