#Name Joseph Herron
#Makefle made on 2/8/2025 at 3 am

CC = g++
CFLAGS = -g -Wall -Wextra
TARGET = employee

all: default


default: main.o Employee.o Officer.o Supervisor.o
	$(CC) main.o Employee.o Officer.o Supervisor.o 


Employee.o: Employee.cpp Employee.h
	$(CC) $(CFLAGS) -c  Employee.cpp 


Officer.o: Officer.cpp Officer.h
	$(CC) $(CFLAGS) -c Officer.cpp 
Supervisor.o: Supervisor.cpp Supervisor.h
	$(CC) $(CFLAGS) -c Supervisor.cpp 

main.o: main.cpp Employee.h Officer.h Supervisor.h
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm -f *.o *~
