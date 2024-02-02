#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

class kl
{
public:
    kl(){};
    ~kl(){};
    void virtual figure() = 0;
};

class kl1 : public kl
{
private:
    int x1;
    int y1;
    int x2;
    int y2;

public:
    kl1(int x1, int y1, int x2, int y2)
    {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    };

    ~kl1(){};

    void figure()
    {
        sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
        sf::RectangleShape shape(sf::Vector2f(x1, y1));
        shape.setPosition(x2, y2);
        shape.setFillColor(sf::Color::Green);

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            window.draw(shape);
            window.display();
        }
    };
};

class kl2 : public kl
{
private:
    float x;
    float y;
    float r;

public:
    kl2(float x, float y, float r)
    {
        this->x = x;
        this->y = y;
        this->r = r;
    };

    ~kl2(){};

    void figure()
    {
        sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
        sf::CircleShape shape(r);
        shape.setPosition(x, y);
        shape.setFillColor(sf::Color::Green);

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            window.draw(shape);
            window.display();
        }
    }
};

int main()
{
    kl *array[2];

    kl1 *rectangle = new kl1(100, 50, 200, 200);
    kl2 *circle = new kl2(200, 200, 50);

    array[0] = rectangle;
    array[1] = circle;

    for (int i = 0; i < 2; i++)
    {
        array[i]->figure();
    }
};