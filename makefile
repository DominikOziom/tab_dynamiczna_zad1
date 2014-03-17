__start__: obj pliki
./pliki

CPPFLAGS=-Wall -pedantic -Iinc -c
LDFLAGS=-Wall



obj:
mkdir obj

pliki: obj/lab_1.o obj/tablica.o 
g++ ${LDFLAGS} -o pliki obj/lab_1.o obj/tablica.o

obj/lab_1.o: src/lab_1.cpp inc/tablica.h
g++ ${CPPFLAGS} -o obj/lab_1.o src/lab_1.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.h
g++ ${CPPFLAGS} -o obj/tablica.o src/tablica.cpp

clean:
rm -f pliki obj/* core*
