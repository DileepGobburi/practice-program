
test : main.o var.o pattern.o string.o tree.o
	gcc main.o var.o pattern.o string.o tree.o -o test

main.o : main.c
	gcc -c main.c
	
var.o: var.c
	gcc -c var.c
	
pattern.o: pattern.c
	gcc -c pattern.c
	
string.o: string.c
	gcc -c string.c
tree.o: tree.c
	gcc -c tree.c

clean:
	rm *.o


