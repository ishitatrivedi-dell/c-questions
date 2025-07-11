#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    Node *prev;
    int val;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLL
{
public:
    Node *head;
    Node *move;
    DoublyLL()
    {
        head = nullptr;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            move = newNode;
            return;
        }
        else
        {
            Node *temp = head;
            move->next = newNode;
            newNode->prev = move;
            move = newNode;
        }
    }

    void print()
    {
        int count = 0;
        Node *temp = head;
        while (temp->next != nullptr)
        {
            if (count == 0)
            {
                cout << temp->val << " ";
                cout << temp->next->val << " " << endl;
                temp = temp->next;
                count++;
                continue;
            }
            cout << temp->prev->val << " ";
            cout << temp->val << " ";
            cout << temp->next->val << " " << endl;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLL list;
    list.push(1220);
    list.push(2230);
    list.push(210);
    list.push(120);
    list.print();
}