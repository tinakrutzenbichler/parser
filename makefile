CC = g++
CFLAGS  = -g -Wall

default: main1

main1:  main.cpp
	$(CC) $(CFLAGS) -o main1 main.cpp parser.cpp

clean: 
	$(RM) main1 *.o *~
