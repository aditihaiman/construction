all: piano.o
	gcc -o program piano.o

piano.o: piano.c
	gcc -c piano.c

run:
	./program