#ifndef BLOCK_HPP_
#define BLOCK_HPP_

#include <cmath>
#define M_PI 3.14159265358979323846

#include <SFML/Graphics.hpp>

class Block
{
private:
    sf::RectangleShape rect;

public:
    Block(const sf::Vector2f & size, const sf::Vector2f & position, const sf::Color & color);

    void Draw(sf::RenderWindow & window);

    float left()   const { return rect.getPosition().x; }
    float rigth()  const { return rect.getPosition().x + rect.getSize().x; }
    float top()    const { return rect.getPosition().y; }
    float bottom() const { return rect.getPosition().y + rect.getSize().y; }
};

#endif // BLOCK_HPP_