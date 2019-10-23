# /*
#  * Makefile
#  *
#  * Max Maleno [mmaleno@hmc.edu]
#  *
#  * Created 10/22/2019
#  * Last Updated 10/22/2019
#  *
#  * This is the Makefile for bitManipulation testing functions.
#  *
#  * Build this software using the shell command "make"
#  *
#  */

# widely-used compiler
CXX = clang++

# flags for debugging, extra warnings, and setting C++ version to 17
CXX_FLAGS = -g -std=c++1z -Wall -Wextra -pedantic

# re-link object files if any of them change
bitMain: bitMain.o bitTest.o bitManipulation.o
	$(CXX) -o bitMain bitMain.o bitTest.o bitManipulation.o

# recompile bitMain if its implementation or bitTest changes
bitMain.o: bitMain.cpp bitTest.cpp bitTest.hpp
	$(CXX) $(CXX_FLAGS) -g -c bitMain.cpp

# recompile bitTest if any bitTest or bitManipulation changes
bitTest.o: bitTest.cpp bitTest.hpp bitManipulation.cpp bitManipulation.hpp
	$(CXX) $(CXX_FLAGS) -g -c bitTest.cpp

# recompile bitManipulation if its implementation or header changes
bitManipulation.o: bitManipulation.cpp bitManipulation.hpp 
	$(CXX) $(CXX_FLAGS) -g -c bitManipulation.cpp

# delete final binary and object files
clean:
	rm -rf bitMain *.o 
