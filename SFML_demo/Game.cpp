#include "Game.h"
#include "Zombie.h"

namespace Engine
{
	Game::Game(unsigned int windowWidth, unsigned int windowHeight)
		: _gameWindow (sf::VideoMode(windowWidth, windowHeight), "Zombies are hungry!")
	{
		
		this->_characters.push_back(new Zombie());

		for (auto object : this->_characters)
		{
			object->LoadResources();
			object->SetVelocity(sf::Vector2f(0.01f, 0.01f));
		}
	}

	Game::~Game() 
	{
	}

	void Game::StartGameLoop() 
	{
		while (this->_gameWindow.isOpen())
		{
			this->UpdateEvents();
			this->UpdateObjects();
			this->Render();
		}
	}

	void Game::UpdateEvents() 
	{
		sf::Event event;
		while (this->_gameWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				this->_gameWindow.close();
			}
		}
	}

	void Game::UpdateObjects() 
	{
		for (auto object : this->_characters)
		{
			object->UpdatePosition();
		}
	}

	void Game::Render() 
	{
		this->_gameWindow.clear();

		for (auto object : this->_characters)
		{
			this->_gameWindow.draw(object->GetDrawData());
		}

		this->_gameWindow.display();
	}
}
