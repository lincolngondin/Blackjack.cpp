#ifndef _HANDS_H_
#define _HANDS_H_

#include "cards.h"

class Hand{
	public:
		Cards *hand = nullptr;
	public:
		Hand();
		void GenerateHand();
		~Hand();
};

#endif //_HANDS_H_