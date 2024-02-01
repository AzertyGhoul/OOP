#include <iostream>

using namespace std;

class Node {
   public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
    Node* head = nullptr;
    int size = 0;

   public:
    void add(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            size++;
        } else {
            Node* currentNode = head;
            while (currentNode->next != nullptr) {
                currentNode = currentNode->next;
            };
            currentNode->next = newNode;
            size++;
        };
    };

    void del() {
        if (head != nullptr) {
            head = head->next;
        };
        size--;
    };

    void front() { cout << "\nFront : " << head->data << "\n"; };

    void back() {
        Node* currentNode = head;
        while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }

        cout << "\nBack : " << currentNode->data << "\n";
    };

    void sizeQueue() { cout << "\nSize : " << size << "\n"; };

    void print() {
        Node* currentNode = head;
        cout << "\nQueue : ";
        while (currentNode != nullptr) {
            cout << currentNode->data << " ";
            currentNode = currentNode->next;
        };
        cout << endl;
    };
};

int main() {
    Queue queue;

    queue.add(2);
    queue.add(3);
    queue.add(4);
    queue.add(5);
    queue.add(6);
    queue.add(10);
    queue.add(3);

    queue.print();
    queue.del();
    queue.print();

    queue.front();
    queue.back();

    queue.sizeQueue();

    queue.del();
    queue.del();
    queue.del();
    queue.print();
    queue.sizeQueue();
};