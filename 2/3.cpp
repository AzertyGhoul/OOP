#include <iostream>
#include <conio.h>

class Third
{
public:
    float p1;

    class First
    {
    public:
        int A, B, C, D, E;
        void inp()
        {
            std::cout << "\nEnter A B C D E separated by a space\n";
            std::cin >> A >> B >> C >> D >> E;
        };
    };

    class Second
    {
    public:
        float X, Y;
        void inp1()
        {
            std::cout << "\nEnter X Y separated by a space\n";
            std::cin >> X >> Y;
        };
    };

    void inp2()
    {
        std::cout << "\nEnter p1\n";
        std::cin >> p1;
    };

    void Sum(First *first, Second *second)
    {
        float sum = 0;
        sum = first->A + first->B + first->C + second->X + second->Y + p1;
        std::cout << "\nSum : " << sum << "\n";
    };

    void Mult(First *first)
    {
        float mul = 0;
        mul = p1 * first->D;
        std::cout << "\nMult : " << mul << "\n";
    };
};

int main()
{
    Third test1;
    Third::First firstInput;
    Third::Second secondInput;

    firstInput.inp();
    secondInput.inp1();

    test1.inp2();
    test1.Sum(&firstInput, &secondInput);
    test1.Mult(&firstInput);

    Third test2;
    Third::First firstInput1;
    Third::Second secondInput1;

    firstInput1.inp();
    secondInput1.inp1();

    test2.inp2();
    test2.Sum(&firstInput1, &secondInput1);
    test2.Mult(&firstInput1);

    getch();

    return 0;
};