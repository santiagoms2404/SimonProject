release : play

simonGame : simonGame.o driver.o
	g++ -Wall -o simonGame.o driver.o

simonGame.o : simonGame.cpp
	g++ -Wall -c simonGame.cpp

driver.o : driver.cpp
	g++ -Wall -c driver.cpp

tidy : 
	@rm -f *.o

clean :
	rm -f *.o simonGame
