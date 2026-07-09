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

    void Push_end(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    void Pop_end() {
        if (tail == nullptr) {
            cout << "Stack is empty, cannot pop." << endl;
            return;
        }

        if (head == tail) { // only one node
            delete tail;
            head = tail = nullptr;
        } else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
        }
        size--;
    }

    void print() {
        if (head == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = head;
        cout << "Stack elements (from bottom to top): ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    stack.Push_end(10);
    stack.Push_end(20);
    stack.Push_end(30);
    stack.Push_end(40);
    stack.print();

    stack.Pop_end();
    stack.print();

    return 0;
}
