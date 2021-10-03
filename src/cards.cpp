#include "cards.h"

Cards::Cards(int deckCount){
	data = new char[deckCount*52];
	decks = deckCount;
}
void Cards::ChangeDeckCount(int newDeckCountValue){
	delete[] data;
	data = new char[newDeckCountValue*52];
	decks = newDeckCountValue;
}
Cards::~Cards(){
	delete[] data;
}