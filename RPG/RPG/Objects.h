#pragma once
#include "Shared.h"
#include "C_Interface.h"
#include <iostream>
#include <SFML/Graphics.hpp>
class Objects:C_Interface
{
public:
	Objects(Shared*,std::string,sf::Vector2f size,unsigned int _ID);
	~Objects();
	void Update()
	{
		_Sprite.setPosition(position);
	}
	void Draw()
	{
		shared->renderWindow->draw(_Sprite);
	}
	void setId(int _id) {
		ID = _id;
	}

	int getId() {
		return ID;
	}
	sf::Sprite& getSprite() { return _Sprite; }
	void SetObjPosition(sf::Vector2f _position)
	{
		
		position = _position;
		getSprite().setPosition(position);
	}

	sf::Vector2i getCoordinates() {
		return coordinates;

	}
	void setCoordinates(sf::Vector2i _coordinates) {
		coordinates = _coordinates;
	}

	//sf::Vector2f ObjGetPosition() { return position; }
private:
	sf::Vector2i coordinates;
	Shared* shared;
	sf::Sprite _Sprite;
	unsigned int ID;
	//sf::Vector2f position;
};

