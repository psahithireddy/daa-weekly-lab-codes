
PRO:	module1.o module2.o module3.o module4.o module5.o test.o 
	g++ test.o module1.o module2.o module3.o module4.o module5.o  -o PRO

test.o:	test.cpp
	g++ -c test.cpp

module1.o:	module1.cpp
	g++ -c module1.cpp

module2.o:	module2.cpp
	g++ -c module2.cpp
module3.o:	module3.cpp
	g++ -c module3.cpp
module4.o:	module4.cpp
	g++ -c module4.cpp

module5.o:	module5.cpp
	g++ -c module5.cpp
clean:
	rm -f test.out 
