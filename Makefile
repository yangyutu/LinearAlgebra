#OPTFLAGS = -O3 -march=nocona -mfpmath=sse -msse3 -Wuninitialized -flto
#MKL_INCLUDE = /opt/intel/mkl/include/
#MKL_INCLUDE = /opt/intel/composer_xe_2013.0.079/mkl/include/
MKL_INCLUDE = /opt/intel/composerxe/mkl/include
CFLAGS = -std=c++0x -I$(MKL_INCLUDE) -I/opt/boost/boost_1_57_0 -c -DNDEBUG -D__LINUX 
#CFLAGS = -std=c++0x -I/g/ssli/software/pkgs/boost_1_49_0 -c -DNDEBUG -D__LINUX $(OPTFLAGS) 
CPP = g++
#MKLROOT = /opt/intel/mkl
#MKLROOT = /opt/intel/composer_xe_2013.0.079/mkl
MKLROOT = /opt/intel/composerxe/mkl
MKLLINKFLAGS = -Wl,--start-group $(MKLROOT)/lib/intel64/libmkl_intel_lp64.a $(MKLROOT)/lib/intel64/libmkl_sequential.a $(MKLROOT)/lib/intel64/libmkl_core.a -Wl,--end-group -lpthread

#MKLLINKFLAGS = -Wl,--start-group -Wl,--end-group -lpthread

LINKOPTFLAGS = -O3 -flto=4 -fwhole-program
LINKFLAGS = -static $(LINKOPTFLAGS) $(MKLLINKFLAGS) -ldl
#LINKFLAGS = 
#ODIR=obj
ODIR =


OBJ = mainSDA.o Matrix.o

test : $(OBJ)
	$(CPP) -o test $(OBJ) $(LINKFLAGS)


mainSDA.o : mainSDA.cpp Random.h Matrix.h
	$(CPP) $(CFLAGS) mainSDA.cpp

Matrix.o : Matrix.h Matrix.cpp Random.h Globals.h
	$(CPP) $(CFLAGS) Matrix.cpp


clean:
	rm -f *.o *~
