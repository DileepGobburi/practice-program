test:main.o area_rect.o area_circle.o
	gcc main.o area_rect.o area_circle.o -o test
main.o:main.c
	gcc -c main.c
area_rect.o:area_rect.c
	gcc -c area_rect.c
area_circle.o:area_circle.c
	gcc -c area_circle.c
clean:
	rm *.o

