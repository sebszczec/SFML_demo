#include "Game.h"

int main()
{
    sf::err().rdbuf(NULL);
    
    Engine::Game game;
    game.StartGameLoop();

    return 0;
}