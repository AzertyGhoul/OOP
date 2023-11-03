#include <iostream>
#include <SFML/Graphics.hpp>

class myDraw
{
public:
    int x1, x2, x3, x4, y1, y2, y3, y4, c1;

    void Grinit(sf::VertexArray brokenLine)
    {
        // Create the main window
        sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

        // Start the game loop
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                // Close window: exit
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            window.draw(brokenLine);
            window.display();
        }
    }

    sf::VertexArray Figura()
    {
        sf::VertexArray brokenLine(sf::LinesStrip, 4);
        brokenLine[0].position = sf::Vector2f(x1, y1);
        brokenLine[1].position = sf::Vector2f(x2, y2);
        brokenLine[2].position = sf::Vector2f(x3, y3);
        brokenLine[3].position = sf::Vector2f(x4, y4);

        return brokenLine;
    }

    myDraw(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4, int c1) : x1(x1), x2(x2), x3(x3), x4(x4), y1(y1), y2(y2), y3(y3), y4(y4), c1(c1){};
};

int main()
{
    myDraw *test = new myDraw(127, 185, 283, 300, 353, 112, 551, 278, 1);
    myDraw *test1 = new myDraw(201, 123, 342, 300, 443, 123, 551, 234, 1);

    sf::VertexArray brokenLine = test->Figura();
    test->Grinit(brokenLine);

    sf::VertexArray brokenLine1 = test1->Figura();
    test1->Grinit(brokenLine1);
};
