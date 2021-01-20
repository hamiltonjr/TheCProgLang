obj = main.o strNCat.o strNCpy.o strNCmp.o
cfg = -std=c11 -Wall -pedantic

test: $(obj)
	gcc $(cfg) -o test $(obj)

$(obj):
	gcc $(cfg) -c $*.c

clean:
	rm -rf test $(obj)
