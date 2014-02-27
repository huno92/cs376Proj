
prog: main.o readLine.o execCmds.o reverse.o sortArray.o lowerReverse.o encript.o decrypt.o unHtml.o
	gcc -o prog main.o readLine.o execCmds.o sortArray.o reverse.o lowerReverse.o encript.o decrypt.o unHtml.o


main.o: main.c readLine.h execCmds.h reverse.h lowerReverse.h decrypt.h encript.h unHtml.h
	gcc -c main.c

decrypt.o:	decrypt.c decrypt.h
	gcc -c decrypt.c

encript.o:	encript.c encript.h
	gcc -c encript.c
lowerReverse.o: lowerReverse.c lowerReverse.h
	gcc -c lowerReverse.c


readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

unHtml.o: unHtml.c unHtml.h
	gcc -c unHtml.c

reverse.o:	reverse.c reverse.h
	gcc -c reverse.c

sortArray.o: sortArray.c sortArray.h
	gcc -c sortArray.c


clean:
	rm -f *.o prog
