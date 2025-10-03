#include <iostream>
#include "BlocksField.hpp"

BlocksField::BlocksField(const sf::Vector2f & size, const sf::Vector2f & position, const sf::Color & color, int columns, int rows)
{
    sf::Vector2f blockSize(size.x / columns, size.y / rows);

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            blocks.push_back(Block(blockSize - sf::Vector2f(4.f, 4.f), position + sf::Vector2f(blockSize.x * i + 2.f, blockSize.y * j + 2.f), color));
        }
    }
}

void BlocksField::Update(Ball & ball)
{
    blocks.remove_if([&ball, this](const Block & block)->bool { return ball.checkColission(block); });
}

void BlocksField::Draw(sf::RenderWindow & window)
{
    for (auto &block : blocks)
    {
       block.Draw(window);
    }
}