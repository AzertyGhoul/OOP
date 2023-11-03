#include <iostream>
#include <conio.h>

template <typename T>
class First
{
public:
    T *array = new T[size];
    int size;

    First(int size) : size(size), array(new T[size]){};

    void fillArray()
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << "Enter element : ";
            std::cin >> array[i];
            std::cout << "\n";
        };
    };

    void bubbleSort()
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - 1 - i; j++)
            {
                if (array[j] > array[j + 1])
                {
                    T tmp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = tmp;
                }
            }
        };
    };

    void minElement()
    {
        T min = array[0];

        for (int i = 0; i < size; i++)
        {
            if (min > array[i])
            {
                min = array[i];
            }
        }

        std::cout << "\nMin : " << min << "\n";
    };

    void maxElement()
    {
        T max = array[0];

        for (int i = 0; i < size; i++)
        {
            if (max < array[i])
            {
                max = array[i];
            }
        }

        std::cout << "\nMax : " << max << "\n";
    };

    void printElement()
    {
        std::cout << "\nArray : ";
        for (int i = 0; i < size; i++)
        {
            std::cout << array[i] << " ";
        }
        std::cout << "\n";
    }
};

int main()
{
    int length = 0;
    std::cout << "Enter length : ";
    std::cin >> length;
    std::cout << "\n";

    First<int> zxc(length);
    zxc.fillArray();
    zxc.printElement();
    zxc.bubbleSort();
    zxc.printElement();
    zxc.minElement();
    zxc.maxElement();

    std::cout << "\n";

    First<float> zxc1(length);
    zxc1.fillArray();
    zxc1.printElement();
    zxc1.bubbleSort();
    zxc1.printElement();
    zxc1.minElement();
    zxc1.maxElement();

    std::cout << "\n";

    First<char> zxc2(length);
    zxc2.fillArray();
    zxc2.printElement();
    zxc2.bubbleSort();
    zxc2.printElement();
    zxc2.minElement();
    zxc2.maxElement();
    getch();
}
