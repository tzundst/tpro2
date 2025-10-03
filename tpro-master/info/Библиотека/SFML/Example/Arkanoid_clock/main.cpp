#include <SFML/Graphics.hpp>
#include <iostream>
#include "GlobalObjects.hpp"
#include "BlocksField.hpp"
#include "Paddle.hpp"
#include "Game.hpp"

int main()
{
    sf::Event event;
    sf::Clock clock;
    float deltaTime;

    //BlocksField blocksField(sf::Vector2f(512.f, 150.f), sf::Vector2f(0.f, 0.f), sf::Color::Yellow, 11, 6);
    //BlocksField blocksField(sf::Vector2f(20.f, 50.f), sf::Vector2f(200.f, 50.f), sf::Color::Yellow, 0, 0);
    BlocksField blocksField(sf::Vector2f(GlobalObjects::windowWidth, 200.f), sf::Vector2f(0.f, 0.f), sf::Color::Yellow, 9, 7);

    //Game::createBall(Ball(10.f, sf::Vector2f(300.f, 400.f), sf::Color::Red, 50.f));
    Game::createBall(Ball(10.f, sf::Vector2f(225.0710f, 400.f), sf::Color::Red, 180.f, 110.f));

    //Paddle paddle(sf::Vector2f(100.f, 10.f), sf::Vector2f(256.f, 450.f), sf::Color::Green, 200.f);
    Game::createPaddle(Paddle(sf::Vector2f(100.f, 10.f), sf::Vector2f(256.f, 450.f), sf::Color::Green, 200.f));

    while (GlobalObjects::window.isOpen())
    {
        deltaTime = clock.restart().asSeconds();

        while (GlobalObjects::window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                GlobalObjects::window.close();
        }


        Game::Update(deltaTime, blocksField);

        GlobalObjects::window.clear(sf::Color::Black);

        blocksField.Draw(GlobalObjects::window);
        Game::Draw(GlobalObjects::window);

        GlobalObjects::window.display();
    }

    return 0;
}