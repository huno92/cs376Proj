prog: main.o readLine.o execCmds.o unHtml.o
	gcc -o prog main.o readLine.o execCmds.o unHtml.o

main.o: main.c readLine.h execCmds.h
	gcc -c main.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

unHtml.o: unHtml.c unHtml.h
	gcc -c unHtml.c

clean:
	rm -f *.o prog
