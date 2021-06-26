#pragma once
#include <SFML/Graphics.hpp>

namespace Engine
{
	class Character
	{
	public:
		Character() = default;
		virtual ~Character();

		virtual bool LoadResources() = 0;
		virtual void Draw() = 0;
		virtual const sf::Drawable & GetDrawData() = 0;
	private:
	};
}

