all: song.o main.o
	gcc song.o main.o

main.o: main.c song.h
	gcc -c main.c

song.o: song.c song.h
	gcc -c song.c

run:
	./a.out

