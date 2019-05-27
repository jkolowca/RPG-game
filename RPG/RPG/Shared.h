#ifndef  SHARED
#define SHARED
#include "Window.h"
struct  Shared {
	Shared(Window* _w, EventManager* _e, sf::RenderWindow* _r) :window(_w), eventManager(_e), renderWindow(_r){}
	Window* window;
	sf::RenderWindow* renderWindow;
	EventManager* eventManager;
};
#endif