#ifndef _CARDS_H_
#define _CARDS_H_

class Cards{
	private:
		char *data = nullptr;
		int decks = 0;
	public:
		Cards(int);
		~Cards();
		void ChangeDeckCount(int);
		char& operator[](int i){
			return data[i];
		}
		char& Get(int i){
			return data[i];
		}
		int GetDeckCount(){
			return decks;
		}
};



#endif //_CARDS_H_