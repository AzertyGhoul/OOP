#include <iostream>
#include <string>

using namespace std;

template <class T>
class strings
{
    T *data;
    int size;
    int n;

public:
    strings(int);
    ~strings(){};

    T &operator[](int i)
    {
        return data[i];
    }
};

template <class T>
strings<T>::strings(int n)
{
    data = new T[n];
    size = n;
}

int main()
{
    int size = 5;

    strings<string> test(size);

    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter string : ";
        cin >> test[i];
    }

    cout << "\nStrings : ";
    for (int i = 0; i < size; i++)
    {
        cout << test[i] << " ";
    }
};