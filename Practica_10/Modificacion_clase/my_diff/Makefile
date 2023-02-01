my_diff : my_diff.o
	g++ -o my_diff my_diff.o
my_diff.o : my_diff.cc
	g++ -c my_diff.cc
.PHONY:

clean:
	rm my_diff
	rm my_diff.o