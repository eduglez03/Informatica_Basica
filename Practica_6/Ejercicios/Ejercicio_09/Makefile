random_numbers : random_numbers.o
	g++ -o random_numbers random_numbers.o
random_numbers.o : random_numbers.cc
	g++ -c random_numbers.cc
.PHONY:

clean:
	rm random_numbers
	rm random_numbers.o