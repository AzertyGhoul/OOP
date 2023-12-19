#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int data)
    {
        this->data = data;
    };
};

class Stack
{
public:
    Node *head = NULL;

    void Add(int data)
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *currentNode = head;
            head = newNode;
            newNode->next = currentNode;
        };
    }

    void Del()
    {
        head = head->next;
    };

    void Top()
    {
        cout << "\nTop : " << head->data;
    };

    void print()
    {
        Node *currentNode = head;

        cout << "\nStack : ";
        while (currentNode != NULL)
        {
            cout << currentNode->data;
            currentNode = currentNode->next;
        }
    };

    ~Stack(){};
};

int main()
{
    Stack stack;

    stack.Add(1);
    stack.Add(2);
    stack.Del();
    stack.Add(3);
    stack.Add(4);
    stack.Top();
    stack.print();
};