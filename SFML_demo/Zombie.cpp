#include "Zombie.h"

namespace Engine
{
	bool Zombie::LoadResources()
	{
		this->_texture.loadFromFile("images/zombiefiles/png/male/Attack (1).png");
		this->_sprite = sf::Sprite(this->_texture, sf::IntRect(0, 0, 430, 519));  // copy of an object

		return true;
	}

	void Zombie::Draw() {}



}