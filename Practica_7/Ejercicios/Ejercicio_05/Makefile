add_one_second : add_one_second.o
	g++ -o add_one_second add_one_second.o
dividers.o : add_one_second.cc
	g++ -c add_one_second.cc
.PHONY:

clean:
	rm add_one_second
	rm add_one_second.o