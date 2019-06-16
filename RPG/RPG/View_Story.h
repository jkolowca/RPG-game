#pragma once
#include "View.h"
#include "Sprite.h"

class View_Story : public View {
public:
	View_Story(ViewManager*);
	~View_Story();

	void Activate();
	void Deactivate();

	void Update();
	void Draw();
	void Position();

	void Interact(sf::Event::KeyEvent);
	void Escape(sf::Event::KeyEvent);
private:
	sf::Sprite sprite;
};