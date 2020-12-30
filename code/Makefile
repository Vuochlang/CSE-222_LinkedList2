linkedlist: main.o add.o insert.o delete.o erase.o search.o print.o freeMemory.o init.o prompt.o
	gcc -o linkedlist main.o add.o insert.o delete.o erase.o search.o print.o freeMemory.o init.o prompt.o

main.o: all.h main.c insert.c erase.c search.c erase.c init.c prompt.c
	gcc -c main.c insert.c erase.c search.c erase.c init.c prompt.c

add.o: all.h add.c
	gcc -c add.c

insert.o: all.h insert.c add.c search.c
	gcc -c insert.c add.c search.c

delete.o: all.h delete.c search.c 
	gcc -c delete.c search.c

erase.o: all.h erase.c delete.c
	gcc -c erase.c delete.c

search.o: all.h search.c
	gcc -c search.c

print.o: all.h print.c
	gcc -c print.c

prompt.o: all.h prompt.c
	gcc -c prompt.c

init.o: all.h init.c
	gcc -c init.c

freeMemory.o: all.h freeMemory.c
	gcc -c freeMemory.c





