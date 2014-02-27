prog: main.o readLine.o execCmds.o lowerReverse.o
	gcc -o prog main.o readLine.o execCmds.o lowerReverse.o

main.o: main.c readLine.h execCmds.h lowerReverse.h
	gcc -c main.c

lowerReverse.o: lowerReverse.c lowerReverse.h
	gcc -c lowerReverse.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

clean:
	rm -f *.o prog
