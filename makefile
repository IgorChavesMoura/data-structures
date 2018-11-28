all: main
main: main.o node.o queue.o stack.o bst.o
	# The compiler makes the binding between the objects
	gcc -o main main.o node.o queue.o stack.o bst.o

main.o:	main.c node.h stack.h queue.h bst.h
	gcc -o main.o -c main.c 

node.o: node.c node.h
	gcc -o node.o -c node.c

stack.o: stack.c stack.h node.h
	gcc -o stack.o -c stack.c

queue.o: queue.c queue.h node.h
	gcc -o queue.o -c queue.c

bst.o: bst.c bst.h
	gcc -o bst.o -c bst.c

clean:
	rm -rf *.o
mrproper: clean
	rm -rf main