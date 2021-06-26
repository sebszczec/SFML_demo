#include "Game.h"
#include "Zombie.h"

namespace Engine
{
	Game::Game(unsigned int windowWidth, unsigned int windowHeight)
	{
		this->_gameWindow = new sf::RenderWindow(sf::VideoMode(windowWidth, windowHeight), "Zombies are hungry!");

		this->_characters.push_back(new Zombie());

		for (auto object : this->_characters)
		{
			object->LoadResources();
		}
	}

	Game::~Game() 
	{
		if (this->_gameWindow != nullptr)
		{
			delete this->_gameWindow;
			this->_gameWindow = nullptr;
		}
	}

	void Game::StartGameLoop() 
	{
		while (this->_gameWindow->isOpen())
		{
			this->UpdateEvents();
			this->UpdateObjects();
			this->Render();
		}
	}

	void Game::UpdateEvents() 
	{
		sf::Event event;
		while (this->_gameWindow->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				this->_gameWindow->close();
			}
		}
	}

	void Game::UpdateObjects() {}

	void Game::Render() 
	{
		this->_gameWindow->clear();

		for (auto object : this->_characters)
		{
			this->_gameWindow->draw(object->GetDrawData());
		}

		this->_gameWindow->display();
	}
}
