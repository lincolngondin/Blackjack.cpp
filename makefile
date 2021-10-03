INCLUDE = "./libs/SDL/include/SDL2/"
LIBS = "./libs/SDL/lib"
PROJETO = blackjack
FLAGS = -O3 -Wall

all: $(PROJETO)

./obj/main.o: ./src/main.cpp ./src/app.h
	g++ $(FLAGS) -c -I $(INCLUDE) $< -o $@

./obj/app.o: ./src/app.cpp ./src/app.h ./src/window.h ./src/hands.h
	g++ $(FLAGS) -c -I $(INCLUDE) $< -o $@

./obj/window.o: ./src/window.cpp ./src/window.h
	g++ $(FLAGS) -c -I $(INCLUDE) $< -o $@

./obj/cards.o: ./src/cards.cpp ./src/cards.h
	g++ $(FLAGS) -c -I $(INCLUDE) $< -o $@

./obj/hands.o: ./src/hands.cpp ./src/hands.h ./src/cards.h
	g++ $(FLAGS) -c -I $(INCLUDE) $< -o $@


run:
	@ ./bin/$(PROJETO)

$(PROJETO): ./obj/main.o ./obj/window.o ./obj/cards.o ./obj/hands.o ./obj/app.o 
	g++ $(FLAGS) $^ -I $(INCLUDE) -L $(LIBS) -lmingw32 -lSDL2main -lSDL2 -o ./bin/$(PROJETO)