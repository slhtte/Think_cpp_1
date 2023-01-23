all: stack_arr stack_vec

stack_arr: main.o stack_impl_arr.o
	g++ main.o stack_impl_arr.o -o stack_arr

stack_vec: main.o stack_impl_vec.o
	g++ main.o stack_impl_vec.o -o stack_vec

stack_impl_arr.o: stack_impl_arr.cpp
	g++ -c stack_impl_arr.cpp

stck_impl_vec.o: stack_impl_vec.cpp
	g++ -c stack_impl_vec.cpp

main.o: main.cpp
	g++ -c main.cpp

