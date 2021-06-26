#pragma once
#include "Character.h"

namespace Engine
{
	class Zombie : public Character
	{
	public:
		Zombie() = default;
		~Zombie() = default;

		bool LoadResources();
		void Draw();
		const sf::Drawable& GetDrawData();
	private:
		sf::Texture _texture;
		sf::Sprite _sprite;
	};
}

