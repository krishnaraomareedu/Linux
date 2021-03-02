TARGET=all.out
OBJS=test.o src/Mystr.o  src/Bit.o src/Utils.o

TOPDIR=${PWD}
CFLAGS=-I${TOPDIR}/inc
LDFLAGS=-lMystr -lUtils -lBit
LIBPATH=${PWD}

all:sall.out

sall.out:test.o libMystr.a libUtils.a libBit.a
	gcc -L${LIBPATH} $< -o $@ ${LDFLAGS} -static

libMystr.a:src/Mystr.o 
	ar rc $@ $^
libUtils.a:src/Utils.o 
	ar rc $@ $^
libBit.a:src/Bit.o 
	ar rc $@ $^

%.o:src/%.c inc/%.h

test.o: test.c inc/*.h

test:
	./sall.out

clean:
	rm -rf *.a *.o src/*.o ${TARGET}
