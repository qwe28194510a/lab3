lab3A:lab3A.o
	g++ -o lab3A lab3A.o
lab3A.o:lab3A.cpp
	g++ -c lab3A.cpp
make clean:
	rm lab3A *.o
