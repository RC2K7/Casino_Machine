main: Casino_Machine.cpp Casino_OS/Casino_OS.o Game/Craps_Game.o
	g++ Casino_Machine.cpp Casino_OS/Casino_OS.o Game/Craps_Game.o -o Casino_Machine.exe

Casino_OS/Casino_OS.o: Casino_OS/Casino_OS.cpp
	g++ -c Casino_OS/Casino_OS.cpp -o Casino_OS/Casino_OS.o

Game/Craps_Game.o: Game/Craps_Game.cpp
	g++ -c Game/Craps_Game.cpp -o Game/Craps_Game.o

clean:
	rm Casino_Machine.exe Casino_OS/Casino_OS.o Game/Craps_Game.o