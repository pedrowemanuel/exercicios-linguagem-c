all: main.e
	
main.e: main.o operacoes.o menu.o
	gcc -o main.e main.o operacoes.o menu.o
main.o: main.c 
	gcc -o main.o -c main.c
operacoes.o: operacoes.c
	gcc -o operacoes.o -c operacoes.c
menu.o: menu.c
	gcc -o menu.o -c menu.c

clean:
	rm -f *.o main.e