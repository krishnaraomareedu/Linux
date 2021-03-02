TARGET=sall.out
OBJS=test.o src/Mystr.o  src/Bit.o src/Utils.o

TOPDIR=${PWD}
CFLAGS=-I${TOPDIR}/include
LDFLAGS=-lMystr -lUtils -lBit
LIBPATH=${PWD}

all:sall.out

sall.out:test.o libMystr.a libUtils.a libBit.a
	gcc -L${LIBPATH} $< -o $@ ${LDFLAGS} 
libMystring.a:src/Mystring.o 
	ar rc $@ $^
libMyutils.a:src/Myutils.o 
	ar rc $@ $^
libBitmask.a:src/Bitmask.o 
	ar rc $@ $^
%.o:src/%.c include/%.h

test.o: test.c include/*.h

test:
	./sall.out

clean:
	rm -rf *.a *.o src/*.o ${TARGET}



