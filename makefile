main: Casino_OS/Casino_OS.o Casino_Machine.cpp
	g++ Casino_Machine.cpp Casino_OS/Casino_OS.o -o Casino_Machine.exe

Casino_OS/Casino_OS.o: Casino_OS/Casino_OS.cpp
	g++ -c Casino_OS/Casino_OS.cpp -o Casino_OS/Casino_OS.o

clean:
	rm Casino_Machine.exe Casino_OS/Casino_OS.o