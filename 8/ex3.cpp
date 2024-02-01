#include <iostream>

using namespace std;

class A {
   private:
    int a;
    int b;

   public:
    void display() { cout << "\nClass A : " << a << b << "\n"; };

    A(int a, int b) {
        this->a = a;
        this->b = b;
    }

    A(){};
};

class B : public A {
   private:
    int c;
    int d;

   public:
    void vvod(int a, int b) { A(a, b); }

    void display() { cout << "\nClass B : " << c << d << "\n"; }

    B(int c, int d) {
        this->c = c;
        this->d = d;
    };
};
class C : public A {
   private:
    int e;
    int f;

   public:
    void vvod(int a, int b) { A(a, b); }

    void display() { cout << "\nClass C : " << e << f << "\n"; }

    C(int e, int f) {
        this->e = e;
        this->f = f;
    };
};

int main() {
    A* first = new A(1, 2);
    B* second = new B(3, 4);
    C* third = new C(5, 6);

    second->vvod(1, 2);
    third->vvod(1, 2);

    first->display();
    second->display();
    third->display();
};