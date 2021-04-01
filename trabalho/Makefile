all: main.e
	
main.e: main.o
	gcc -o main.e main.o
main.o: main.c 
	gcc -o main.o -c main.c
clean:
	rm -f *.o main.e