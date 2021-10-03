INCLUDE = "./libs/SDL/include/SDL2/"
LIBS = "./libs/SDL/lib"
PROJETO = blackjack
FLAGS = -O3 -Wall

all: $(PROJETO)

./obj/main.o: ./src/main.cpp
	g++ $(FLAGS) -c -I $(INCLUDE) $< -o $@

run:
	@ ./bin/$(PROJETO)

$(PROJETO): ./obj/main.o
	g++ $(FLAGS) $^ -I $(INCLUDE) -L $(LIBS) -lmingw32 -lSDL2main -lSDL2 -o ./bin/$(PROJETO)