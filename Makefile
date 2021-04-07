.c.o:   $*.h
	gcc -c $*.c

.cpp.o:	$*.h
	g++	-c $*.cpp

all:	testeFila	

testeFila:	tadNoSimp.o tadFila.o testeFila.o 
	g++ -o $@ $^

clean:
	rm *.o testeFila 
