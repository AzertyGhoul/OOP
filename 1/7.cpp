#include <iostream>
#include <cmath>
#include <SFML/Graphics.hpp>

void drawHilbertCurve(sf::RenderWindow &window, sf::Vector2f position, float length, int level, int direction)
{
    if (level <= 0)
    {
        return;
    }

    length /= 2;

    // Рисуем первую часть кривой
    drawHilbertCurve(window, position, length, level - 1, -direction);

    // Рисуем соединяющую часть
    position.x += length * direction;
    sf::Vertex line[] = {
        sf::Vertex(position, sf::Color::White),
        sf::Vertex(sf::Vector2f(position.x, position.y + length * direction), sf::Color::White)};
    window.draw(line, 2, sf::Lines);

    // Рисуем вторую часть кривой
    drawHilbertCurve(window, position, length, level - 1, direction);

    // Рисуем соединяющую часть
    position.y += length * direction;
    line[0].position = position;
    line[1].position = sf::Vector2f(position.x + length * direction, position.y);
    window.draw(line, 2, sf::Lines);

    // Рисуем третью часть кривой
    drawHilbertCurve(window, position, length, level - 1, direction);

    // Рисуем соединяющую часть
    position.x -= length * direction;
    line[0].position = position;
    line[1].position = sf::Vector2f(position.x, position.y - length * direction);
    window.draw(line, 2, sf::Lines);

    // Рисуем четвертую часть кривой
    drawHilbertCurve(window, position, length, level - 1, -direction);
}

int main()
{
    int level = 8;       // Уровень детализации кривой
    float length = 1000; // Длина стороны окна

    sf::RenderWindow window(sf::VideoMode(length, length), "Hilbert Curve");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();

        sf::Vector2f position(length / 2, length / 2);
        drawHilbertCurve(window, position, length, level, 1);

        window.display();
    }

    return 0;
}
