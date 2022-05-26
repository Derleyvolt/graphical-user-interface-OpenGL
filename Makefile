files   = A.cpp container.cpp component.cpp
objects = A.o container.o component.o

compile: 
	g++ -c $(files) -I"/home/derley/Downloads/SFML-2.5.1-linux-gcc-64-bit/SFML-2.5.1/include"
	g++ $(objects) -o A -L"/home/derley/Downloads/SFML-2.5.1-linux-gcc-64-bit/SFML-2.5.1/lib" -lsfml-graphics -lsfml-window -lsfml-system
	export LD_LIBRARY_PATH="/home/derley/Downloads/SFML-2.5.1-linux-gcc-64-bit/SFML-2.5.1/lib" && ./A
