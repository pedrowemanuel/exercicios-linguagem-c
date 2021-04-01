all: main.e
	
main.e: main.o imagenspgm.o
	gcc -o main.e main.o imagenspgm.o
main.o: main.c 
	gcc -o main.o -c main.c
imagenspgm.o: imagenspgm.c
	gcc -o imagenspgm.o -c imagenspgm.c
clean:
	rm -f *.o main.e