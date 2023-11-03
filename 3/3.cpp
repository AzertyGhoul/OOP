#include <iostream>
#include <conio.h>

class myFriendDemo
{
public:
    void Vyvod()
    {
        std::cout << "Z1 : " << z1 << "\nZ2 : " << z2 << "\nZ3 : " << z3 << "\nS1 : " << s1 << "\n\n";
    };

    float SUMKOM()
    {
        float sum = 0;
        sum = z1 + z2 + z3;
        return sum;
    };

    float Sum(std::string &string)
    {
        float sum = 0;
        sum = z1 + z2 + z3;
        string = s1;
        return sum;
    };

    float Sub()
    {
        float difference = 0;
        difference = z1 - z2 - z3;
        return difference;
    };

    myFriendDemo(float z1, float z2, float z3, std::string s1) : z1(z1), z2(z2), z3(z3), s1(s1){};

private:
    float z1, z2, z3;
    std::string s1;
};

int main()
{
    myFriendDemo obj1(3, 2, 1, "OBJ1");
    myFriendDemo obj2(1, 2, 3, "OBJ2");
    std::string obj1String;
    std::string obj2String;

    obj1.Vyvod();
    obj1.SUMKOM();
    obj1.Sum(obj1String);
    obj1.Sub();

    obj2.Vyvod();
    obj2.SUMKOM();
    obj2.Sum(obj2String);
    obj2.Sub();

    getch();

    return 0;
}