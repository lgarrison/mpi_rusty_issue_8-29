#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {  
  int ret = -1;
  MPI_Init_thread(NULL, NULL, MPI_THREAD_FUNNELED, &ret);
  if(ret < MPI_THREAD_FUNNELED){
    printf("MPI_Init_thread() reports it supports level %d, not MPI_THREAD_FUNNELED.\n", ret);
  }
  
  // Find out rank, size
  int world_rank;
  MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
  int world_size;
  MPI_Comm_size(MPI_COMM_WORLD, &world_size);

  printf("Hello from rank %d of %d\n", world_rank, world_size);

  MPI_Finalize();
}
