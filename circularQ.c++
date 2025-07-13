#include <iostream>
using namespace std;

class CircularQueue {
private:
    int size;
    int front;
    int rear;
    int* arr;

public:
    CircularQueue(int s) {
        size = s;
        arr = new int[size];
        front = -1; // mtlab ki queue khali hai initially 
        rear = -1;
    }

    bool isFull() {
        return (front == (rear + 1) % size);
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Enqueue operation
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = value;
        cout << "Inserted: " << value << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        int removed = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
        cout << "Deleted: " << removed << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    ~CircularQueue() {
        delete[] arr;
    }
};
