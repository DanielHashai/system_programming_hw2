all:
	gcc -Wall -c main.c -c my_mat.c
	gcc -o connections main.o my_mat.o

clean:
	rm -rf *.o *.a *.so
