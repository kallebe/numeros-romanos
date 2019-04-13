IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj
TDIR=teste
LDIR =../lib

LIBS=-lm
LOCAL_GTEST= /usr/local/lib/libgtest.a
LIBS_TEST= -fPIC -O2 -g -lpthread

_DEPS = romano.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = romano.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

romano: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

testa_romano: $(TDIR)/testa_romano.cpp $(ODIR)/romano.o
	$(CC) $< $(ODIR)/romano.o $(LOCAL_GTEST) -o $@ $(CFLAGS) $(LIBS_TEST)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 