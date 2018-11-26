
all: test


test: Prime.o IsThatRealPrime.o lab13-zd.o  zd.o test.o
	g++ -O2 $^ -o test

IsThatRealPrime.o: s19616/IsThatRealPrime.cpp
	g++ -std=c++11 -c $< 
Prime.o: s18505/Prime.cpp
	g++ -std=c++11 -c $< 
lab13-zd.o: s18563/lab13-zd.cpp
	g++ -std=c++11 -c $< 
zd.o: s19376/zd.cpp
	g++ -std=c++11 -c $< 
test.o: test.cpp
	g++ -std=c++11 -c $< 

clean:
	rm -f test *.o s18505/Prime.o s18563/lab13-zd.o s19376/zd.o test.o
