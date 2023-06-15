a.out: a.o b.o c.o
	gcc a.o b.o c.o

a.o: a.c
	gcc -c a.c

b.o: b.c
	gcc -c b.c
    
c.o: c.c
	gcc -c c.c

clean:
	rm -rf a.o
	rm -rf b.o
	rm -rf c.o
	rm -rf a.out
