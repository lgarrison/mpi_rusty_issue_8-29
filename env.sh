
module load modules/2.0-20220630

module load gcc/10.3
module load openmpi/4

export CXX=mpic++
export CC=mpicc

export ASAN_OPTIONS="halt_on_error=1:detect_leaks=0"
export UBSAN_OPTIONS="halt_on_error=1"
