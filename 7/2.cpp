#include <iostream>

using namespace std;

class class1
{
protected:
    int x;
    int y;

private:
    float a;
    float b;
    float c;

public:
    float s1 = 0;
    float s2 = 0;

    void Sum()
    {
        s1 = x + y;
    };

    void Sum1()
    {
        s2 = a + b + c;
    };

    class1(int x, int y, float a, float b, float c)
    {
        this->x = x;
        this->y = y;
        this->a = a;
        this->b = b;
        this->c = c;
    };

    ~class1(){};

    friend class class2;
};

class class2
{
public:
    void F1(class1 *obj)
    {
        cout << "\nSum x + y : " << obj->s1;
    };

    void F2(class1 *obj)
    {
        cout << "\nSum a + b + c : " << obj->s2;
    };
};

int main()
{
    class1 obj(5, 6, 7.8, 9.10, 11.12);
    class2 friendClass;

    obj.Sum();
    obj.Sum1();

    friendClass.F1(&obj);
    friendClass.F2(&obj);

    cout << "\nS1 : " << obj.s1 << "\nS2 : " << obj.s2;
};