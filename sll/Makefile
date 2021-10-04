
final:main.o add_bgn.o add_end.o dte_bgn.o dte_end.o display.o
	gcc main.o add_bgn.o add_end.o dte_bgn.o dte_end.o display.o -o final
main.o:main.c
	gcc -c main.c
add_bgn.o:add_bgn.c
	gcc -c add_bgn.c
add_end.o:add_end.c
	gcc -c add_end.c
dte_bgn.o:dte_bgn.c
	gcc -c dte_bgn.c
dte_end.o:dte_end.c
	gcc -c dte_end.c
display.o:display.c
	gcc -c display.c
clean:
	rm *.o

