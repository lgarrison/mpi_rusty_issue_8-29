# mpi_rusty

A possible problem with OpenMPI 4 on rusty?  Maybe related to https://github.com/open-mpi/ompi/issues/10415

## Build
```console
$ . env.sh
$ make
```

## Run
```
$ salloc -n2 bash
$ srun mpi_test  # error
$ srun --mpi=list
$ srun --mpi=pmi2 mpi_test  # error
$ srun --mpi=pmix mpi_test  # no error
$ srun --mpi=pmix_v3 mpi_test  # no error
```
