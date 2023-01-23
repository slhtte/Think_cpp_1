CPP = g++
OFLAG = -o
.SUFFIXES: .o .cpp
.cpp.o:
	$(CPP) -c $<

main: funcs.o main.o
	$(CPP) funcs.o main.o $(OFLAG) main

funcs.o: funcs.cpp
main.o: main.cpp

