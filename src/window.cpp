#include "window.h"
Window::Window(const char* title, int width, int height){
	SDL_Init(SDL_INIT_EVERYTHING);
	janela = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
	render = SDL_CreateRenderer(janela, -1, SDL_RENDERER_ACCELERATED);
	SDL_Log("Tela iniciada!\n");
}
Window::~Window(){
	SDL_DestroyWindow(janela);
	SDL_DestroyRenderer(render);
	SDL_Quit();
	SDL_Log("Tela destroida!\n");
}
void Window::UpdateWindow(){
	SDL_RenderPresent(render);
}

void Window::ClearWindow(){
	SDL_SetRenderDrawColor(render, 255, 255, 255, 1);
	SDL_RenderClear(render);			
}