#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class Rect {
    int x1;
    int y1;
    int x2;
    int y2;

   public:
    Rect(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }

    void draw() {
        sf::RenderWindow window(sf::VideoMode(800, 600), "Lab_8!");
        sf::RectangleShape rect(sf::Vector2f(x1, y1));
        rect.move(x2, y2);

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) window.close();
            }

            window.clear();
            window.draw(rect);
            window.display();
        }
    }
};
class Circle {
    int x1;
    int y1;
    int r;
    sf::Color color;

   public:
    Circle(int x1, int y1, int r, sf::Color color) {
        this->x1 = x1;
        this->y1 = y1;
        this->r = r;
        this->color = color;
    };

    void draw() {
        sf::RenderWindow window(sf::VideoMode(800, 600), "Lab_8!");
        sf::CircleShape circle(r);
        circle.move(x1, y1);
        circle.setFillColor(color);

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) window.close();
            }

            window.clear();
            window.draw(circle);
            window.display();
        }
    }
};

int main() {
    Rect* rect = new Rect(120, 50, 340, 275);
    rect->draw();

    Circle* circle = new Circle(300, 200, 100, sf::Color(255, 128, 128));
    circle->draw();

    return 0;
}