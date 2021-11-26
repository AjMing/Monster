compile: main.cpp 
	 g++  main.cpp -o monster


run: monster
	 ./monster


clean: monster
	 rm monster
