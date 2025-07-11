#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class List {
private:
    Node* head;
    Node* tail;

public:
    List() {
        head = nullptr;
        tail = nullptr;
    }

    void push_front(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
            newNode->next = head; 
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head; 
        }
    }

    void push_back(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
            newNode->next = head;
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void delete_back() {
        if (!head) return;

        if (head == tail) { 
            delete head;
            head = tail = nullptr;
            return;
        }

        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = head;
    }

    void print() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    List myList;

    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(5);
    myList.push_front(1);
    myList.print(); 

    myList.delete_back();
    myList.print(); 

    return 0;
}
