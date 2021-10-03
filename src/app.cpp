#include "app.h"
#include "window.h"

static Window Tela("Blackjack Game", 400, 400);

void Init(){
	SDL_Event e;
	bool running = true;
	while(running){
		while(SDL_PollEvent(&e)){
			if(e.type == SDL_QUIT){
				running = false;
			}
		}
		
		Tela.ClearWindow();		
		Tela.UpdateWindow();
		SDL_Delay(1000/30);
	}
}