#include "Character.h"

namespace Engine
{
	Character::~Character() {}

	const sf::Drawable& Character::GetDrawData()
	{
		return this->_sprite;
	}

	void Character::SetVelocity(const sf::Vector2f& velocity)
	{
		this->_velocity = velocity;
	}

	void Character::UpdatePosition()
	{
		this->_sprite.move(this->_velocity);
	}
}
