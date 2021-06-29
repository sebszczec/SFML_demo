#pragma once
#include "Character.h"
#include <vector>

namespace Engine
{
	class Game
	{
	public:
		Game(unsigned int windowWidth = 800, unsigned int windowHeight = 600);
		~Game();
		void StartGameLoop();
	private:
		void UpdateEvents();
		void UpdateObjects();
		void Render();

		sf::RenderWindow _gameWindow;
		sf::Clock _clock;

		std::vector<Character *> _characters;
	};
}

