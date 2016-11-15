CFLAGS=-Wall

PROGRAMS=solver

.phony: clean

all: $(PROGRAMS)

$(PROGRAMS): %: %.o

clean:
	@rm -f $(PROGRAMS)
	@rm -f *.o
