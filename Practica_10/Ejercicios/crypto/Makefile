# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#ss
# @author Eduardo González Gutiérrez
# @date 16/12/2021
# @brief Makefile for "crypto"
# 

CXX = g++						             # The C++ compiler command
CXXFLAGS = -std=c++17 -g -Wall	 # The C++ compiler options (C++17, preserve debug symbols and warn all)
LDFLAGS =						             # The linker options (if any)

# The all target builds all of the programs handled by the makefile.
all: crypto

crypto: main.o crypto.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# main.o crypto.o: main.cc crypto.cc
#
	$(CXX) $(CXXFLAGS) -c $<

# The clean target removes all of the executable files
# and object files produced by the build process
# We can use it for additional housekeeping purposes
clean :
	rm -f *.o main doc
	rm -rf *~ basura b i
	rm -rf a.out
	rm -rf crypto
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;