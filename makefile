prog: main.o readLine.o execCmds.o encript.o decrypt.o
	gcc -o prog main.o readLine.o execCmds.o encript.o decrypt.o

main.o: main.c readLine.h execCmds.h
	gcc -c main.c

decrypt.o:	decrypt.c decrypt.h
	gcc -c decrypt.c

encript.o:	encript.c encript.h
	gcc -c encript.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

clean:
	rm -f *.o prog
