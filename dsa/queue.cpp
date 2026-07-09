#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class Stack {
private:
    Node* head;
    Node* tail;
    int size;

public:
    Stack() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void dequeue() {
        if (tail == nullptr) {
            cout << "queue is empty, cannot pop." << endl;
            return;
        }

        if (head == tail) { 
            delete tail;
            head = tail = nullptr;
        } else {
            Node* temp = head;
            head->next = nullptr;
            delete temp;
        }
        size--;
    }

    void print() {
        if (head == nullptr) {
            cout << "queue is empty" << endl;
            return;
        }

        Node* temp = head;
        cout << "queue elements (from bottom to top): ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack queue;
    // queue.dequeue();
    queue.enqueue(5);
    queue.print();

    return 0;
}
