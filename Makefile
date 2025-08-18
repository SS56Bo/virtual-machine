flags = -O2 -Wall 
CC = gcc

all: VM

VM: main.c 
	${CC} ${flags} main.c -o VM

clean: 
	rm -f VM
