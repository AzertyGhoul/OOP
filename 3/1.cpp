#include <iostream>
#include <string>
#include <conio.h>

class Node
{
public:
    std::string FIO;
    int year;
    int course;
    Node *next = NULL;
    Node *prev = NULL;

    Node(std::string FIO, int year, int course) : FIO(FIO), year(year), course(course){};
};

class Stack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(std::string FIO, int year, int course)
    {
        Node *element = new Node(FIO, year, course);

        if (head == NULL)
        {
            head = element;
            tail = element;
        }
        else
        {
            Node *nextELement = head;

            while (nextELement->next != NULL)
            {
                nextELement = nextELement->next;
            }

            nextELement->next = element;
            element->prev = nextELement;
            tail = element;
        }
    };

    void pop()
    {
        Node *element = tail;
        element->prev->next = NULL;
        tail = element->prev;
    };

    void printStack()
    {
        Node *elements = tail;
        std::cout << "\nStack";
        while (elements != NULL)
        {
            std::cout << "\nFIO : " << elements->FIO << "\n";
            std::cout << "Year : " << elements->year << "\n";
            std::cout << "Course : " << elements->course << "\n";
            elements = elements->prev;
        }
    };
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Stack *stack = new Stack();

    stack->push("Nekrasov A.B", 2003, 3);
    stack->push("Ukolov K.C", 2001, 3);
    stack->push("Pronkin M.A", 2003, 3);
    stack->printStack();

    stack->pop();
    stack->printStack();

    getch();
    return 0;
};