#pragma once
#include <SFML/Graphics.hpp>
#include <SFML\System\Vector2.hpp>

namespace Engine
{
	class Character
	{
	public:
		Character() = default;
		virtual ~Character();

		virtual bool LoadResources() = 0;
		virtual void Draw() = 0;

		const sf::Drawable & GetDrawData();
		void SetVelocity(const sf::Vector2f & velocity);
		void UpdatePosition();
	protected:
		sf::Texture _texture;
		sf::Sprite _sprite;

		sf::Vector2f _velocity;
	};
}

