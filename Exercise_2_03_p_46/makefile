obj = main.o htoi.o
cfg = -std=c11 -Wall -pedantic

htoi: $(obj)
	gcc $(cfg) -o htoi $(obj)

$(onj): htoi.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf htoi $(obj)

