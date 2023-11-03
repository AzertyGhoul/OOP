#include <iostream>
#include <algorithm>
#include <conio.h>

template <typename T>
T min(T a, T b, T c, T d, T e, T f, T g)
{
    return std::min({a, b, c, d, e, f, g});
};

int main()
{

    std::cout << "Int min number : " << min(1, 2, 3, 4, 5, 6, 7) << "\n";

    std::cout << "Float min number : " << min(1.1245182488, 2.124, 3.123, 4.123, 5.12, 6.32, 7.123) << "\n";

    std::cout << "Char min symbol : " << min('b', 'c', 'd', 'e', 'f', 'g', 'a');

    getch();
}