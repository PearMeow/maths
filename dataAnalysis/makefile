ARGS=sort
default: run

run: compile
	./$(ARGS).exe

compile:
	g++ -std=c++17 -o $(ARGS).exe -g $(ARGS).cpp

good:
	g++ -std=c++17 -pedantic -Wall -Wextra -Werror -o $(ARGS).exe -g $(ARGS).cpp

clean:
	rm *.exe
