#include <iostream>
#include <cmath>

using namespace std;

class First
{
private:
    int a;
    int b;
    int c;

protected:
    float x;
    float y;
    float z;

public:
    First(int a, int b, int c, float x, float y, float z)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->x = x;
        this->y = y;
        this->z = z;
    };

    ~First(){};

    friend void Kvur(First *object);
    friend void Sum(First *object);
};

void Kvur(First *object)
{
    int D = pow(object->b, 2) - (4 * object->a * object->c);

    if (D < 0)
    {
        cout << "Roots do not exist\n";
    }
    else
    {
        float x1 = (-object->b + sqrt(D)) / (2 * object->a);
        float x2 = (-object->b - sqrt(D)) / (2 * object->a);

        cout << "X1 : " << x1 << "\nX2 : " << x2;
    }
};

void Sum(First *object)
{
    cout << "\nSum of protected class fields : " << abs(object->x) + abs(object->y) + abs(object->z);
};

int main()
{
    First *object = new First(5, 3, -26, 4.5, 6.7, -8.9);

    Kvur(object);
    Sum(object);
}