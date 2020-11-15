

all:mymaths mymathd mains maind

mains:main.o libmyMath.a
	gcc -Wall -o mains main.o libmyMath.a

maind:main.o libmyMath.so 
	gcc -Wall -o maind main.o ./libmyMath.so
	
mymaths:libmyMath.a 
	
mymathd:libmyMath.so

libmyMath.a:basicMath.o power.o myMath.h
	ar -rcs libmyMath.a basicMath.o power.o myMath.h

libmyMath.so:basicMath.o power.o myMath.h
	gcc -shared -o libmyMath.so -fPIC basicMath.o power.o myMath.h

power:power.c myMath.h
	gcc -Wall -c power.c -o power.o
	
basicMath:basicMath.c myMath.h
	gcc -Wall -c basicMath.c -o basicMath.o
	
main:main.c myMath.h
	gcc -Wall -c main.c -o main.o
	
.PHONY:clean

clean:
	rm -f *.o *.a *.so mains maind
	
	

