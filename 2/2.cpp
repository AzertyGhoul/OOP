#include <iostream>
#include <conio.h>

class First
{
public:
    int A, B, C, D, E;

    void inp()
    {
        std::cout << "\nEnter A B C D E separated by a space\n";
        std::cin >> A >> B >> C >> D >> E;
    }
};

class Second
{
public:
    float X, Y;

    void inp1()
    {
        std::cout << "\nEnter X Y separated by a space\n";
        std::cin >> X >> Y;
    }
};

class Third : public First, public Second
{
public:
    float p1;

    void inp2()
    {
        std::cout << "\nEnter p1\n";
        std::cin >> p1;
    }

    void Sum()
    {
        float sum = 0;
        sum = A + B + C + X + Y + p1;

        std::cout << "\nSum : " << sum << "\n";
    }

    void Mult()
    {
        float mul = 0;
        mul = p1 * D;

        std::cout << "\nMult : " << mul << "\n";
    }
};

int main()
{

    Third first;
    Third second;

    first.inp();
    first.inp1();
    first.inp2();
    first.Sum();
    first.Mult();

    second.inp();
    second.inp1();
    second.inp2();
    second.Sum();
    second.Mult();

    getch();

    return 0;
};