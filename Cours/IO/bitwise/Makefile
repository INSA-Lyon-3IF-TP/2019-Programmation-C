main : main.o bitwise.o
	gcc -o main main.o bitwise.o

main.o : main.c
	gcc -Wall -Werror -o main.o main.c

bitwise.o : bitwise.c bitwise.h
	gcc -Wall -Werror -o bitwise.o bitwise.c bitwise.h
