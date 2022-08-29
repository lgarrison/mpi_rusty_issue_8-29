CFLAGS := -fsanitize=address,undefined

all: mpi_test

clean:
	rm -f mpi_test

.PHONY: clean
