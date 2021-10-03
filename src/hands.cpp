#include "hands.h"
#include "cards.h"
#include <cstdlib>
#include <cstdio>
static char CARDS[13] = {'a','1','2','3','4','5','6','7','8','9','i','j','k'}; //i will internally act like 10

Hand::Hand(){
	hand = new Cards(1);
}
void Hand::GenerateHand(){
	int totalCards = hand->GetDeckCount()*52;
	for(int suit = 0; suit < 4*hand->GetDeckCount(); suit++){
		for(int crd = 0; crd < 13; crd++){
			hand->Get(crd + suit*13) = CARDS[crd];
		}
	}
	for(int i = 0; i < totalCards;i++){
		int choose = rand()%totalCards;
		char temp = hand->Get(i);
		hand->Get(i) = hand->Get(choose);
		hand->Get(choose) = temp;
	}
}
Hand::~Hand(){
	delete hand;
}