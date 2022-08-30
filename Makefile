#CFLAGS := -fsanitize=address,undefined
LDFLAGS += -ltcmalloc

all: mpi_test

clean:
	rm -f mpi_test

.PHONY: clean
