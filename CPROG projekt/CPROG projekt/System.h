#ifndef SYSTEM_H
#define SYSTEM_H
#include <SDL.H>


namespace cgame{
	class System
	{
	public:
		System();
		~System();
		SDL_Renderer* getRen() const; 

	private: 
		SDL_Window* win; 
		SDL_Renderer* ren; 
	};

	extern System sys;
}
#endif