
all: test


test: s18505/Prime_number.o s18563/lab13-zd.o s19376/zd.o test.o
	g++ -O2 s18505/Prime_number.o s18563/lab13-zd.o s19376/zd.o test.o -o test


s18505/Prime_number.o: s18505/Prime_number.cpp
	g++ -std=c++11 -c $< 
s18563/lab13-zd.o: s18563/lab13-zd.cpp
	g++ -std=c++11 -c $< 
s19376/zd.o test.o: s19376/zd.o test.cpp
	g++ -std=c++11 -c $< 

clean:
	rm -f s18505/Prime_number.o s18563/lab13-zd.o s19376/zd.o test.o
