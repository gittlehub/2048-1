all: 2048

clean:
	rm -rf $(LIBOBJS) $(LIB) 2048

LIBOBJS = helpers.o

LIB = lib2048.a

lib2048.a: $(LIBOBJS)
	ar -rc $(LIB) $(LIBOBJS)

helpers.o:
	gcc -I. -o $@ -c helpers.c

2048: main.c $(LIB)
	gcc -I. -o 2048 main.c $(LIB)

