output: Lab3_B_main.o Lab3_B_Shape.o
	g++ Lab3_B_main.o Lab3_B_Shape.o -o output
	
Lab3_B_main.o: Lab3_B_main.cpp
	g++ -c Lab3_B_main.cpp

Lap3_B_Shape.o: Lab3_B_Shape.cpp Lab3_B_Shape.h
	g++ -c Lab3_B_Shape.cpp
	
clean:
	rm *.o output
