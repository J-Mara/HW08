default: main.c strings.o strings.h
	gcc -o mai strings.o main.c
run:
	./mai
