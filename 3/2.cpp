#include <iostream>
#include <string>
#include <conio.h>

class Node
{
public:
    std::string some;
    Node *next = NULL;

    Node(std::string some) : some(some){};
};

class Queue
{
public:
    Node *head = NULL;

    void add(std::string some)
    {
        Node *element = new Node(some);

        if (head == NULL)
        {
            head = element;
        }
        else
        {
            Node *nextElement = head;

            while (nextElement->next != NULL)
            {
                nextElement = nextElement->next;
            }

            nextElement->next = element;
        }
    };

    void remove()
    {
        if (head->next != NULL)
        {
            head = head->next;
        }
    };

    void printQueue()
    {
        Node *curentElement = head;

        std::cout << "Queue\n";
        while (curentElement != NULL)
        {
            std::cout << "String : " << curentElement->some << "\n";
            curentElement = curentElement->next;
        }
        std::cout << "\n";
    }
};

int main()
{
    Queue *queue = new Queue();

    queue->add("Nekrasov");
    queue->add("Ukolov");
    queue->add("Pohilko");
    queue->add("Boris");
    queue->add("Lisina");
    queue->printQueue();

    queue->remove();
    queue->printQueue();

    getch();

    return 0;
};