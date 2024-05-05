ARGS=testIndep
default: run

run: compile
	./$(ARGS)

compile:
	g++ -std=c++17 -o $(ARGS) -g $(ARGS).cpp

good:
	g++ -std=c++17 -pedantic -Wall -Wextra -Werror -o $(ARGS) -g $(ARGS).cpp

clean:
	rm $(ARGS)
