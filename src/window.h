#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <SDL.h>

class Window{
	private:
		SDL_Window *janela = nullptr;
		SDL_Renderer *render = nullptr;
	public:	
		Window(const char*, int, int);
		~Window();
		void UpdateWindow();
		void ClearWindow();
};

#endif //_WINDOW_H_

