program: main.o func.o
	g++ main.o func.o -o program
main.o:
	g++ -c main.cpp -o main.o
func.o:
	g++ -c func.cpp -o func.o
clear:
	rm -rf func.o main.o