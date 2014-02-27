
prog: main.o readLine.o execCmds.o reverse.o sortArray.o lowerReverse.o
	gcc -o prog main.o readLine.o execCmds.o sortArray.o reverse.o lowerReverse.o


main.o: main.c readLine.h execCmds.h reverse.h lowerReverse.h
	gcc -c main.c

lowerReverse.o: lowerReverse.c lowerReverse.h
	gcc -c lowerReverse.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

reverse.o:	reverse.c reverse.h
	gcc -c reverse.c

sortArray.o: sortArray.c sortArray.h
	gcc -c sortArray.c


clean:
	rm -f *.o prog
