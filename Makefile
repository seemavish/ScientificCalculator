CC = g++
CFLAGS = -Wall -g

main.exe: main.o calculator.o 
	$(CC) $(CFLAGS) -o main.exe main.o calculator.o 

main.o: main.cpp 
	$(CC) $(CFLAGS) -c main.cpp

calculator.o: calculator.cpp
	$(CC) $(CFLAGS) -c calculator.cpp 

clean:
	rm -f *o main.exe *gch