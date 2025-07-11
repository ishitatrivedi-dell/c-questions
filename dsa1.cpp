#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};
// Linked list class
class List {
public:

    Node* head;
    Node* move;
    
    // Constructor to initialize head to nullptr
   List(){
    head = nullptr;
   }
   void push_back(int value){
    Node* newNode = new Node(value);

    if(head==nullptr){
        head = newNode;
        move = newNode;
        return ;
    }
    else{
        Node* temp = head ;
        move->next = newNode;
        newNode->prev = move;
        move = newNode;
    }
   }
   void push_front(int value){

    Node* newNode = new Node(value);
    newNode->next = head ;
    newNode->prev = nullptr;

    if(head != nullptr){
       head->prev = newNode;
    }
    head = newNode;
   }

   void Between(int index, int value){
    Node* temp = head;
    int count = 0;
 
    while( temp != nullptr && count < index-1){
        temp = temp -> next ;
        count ++;
    }

    Node* newNode = new Node(value);
    newNode->next = temp->next ;
    newNode->prev = temp;
    // Node* extra = temp->next;
    // newNode->next= extra;
    // extra->prev = newNode; 

    if(temp->next != nullptr){
        temp->next->prev= newNode;
    }
    temp->next = newNode;
   }

   void delete_front(){
    // head->next->prev= nullptr;
    // head->next = nullptr ;
    // delete head ; 
    // Node* extra = head ;
    // head = extra;

    if (head == nullptr){
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head ; // head ke bad ki values ko khi store karna pdega varna list hi khtm ho jayegi
    head = head->next ; // head ko shift kiya hai uske bad vale node mai 

    // naya head orginial ke baju vala hai 

    if(head != nullptr){
        head->prev= nullptr;
    }
    delete temp ; // delete head karenge to jo updates naya head hai vo delte ho jayega 
   }
   void delete_back()
   {
     if (head == nullptr){
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head ;
    while (temp->next != nullptr){temp = temp->next ;} // ye last vale node tak nai jayega 
     temp->prev->next = nullptr; // last vale ko hatane ke liye hume usse pichle vale node ke next ko null karke temp ko delete karna hai , aur ye line mai temp ke prev ke next ko null karke usko last vale se disconnect kiya hai 
     delete temp;
   }

   void deleteBetween(int index, int value){
    
   }

   void print(){
    int count = 0;
    Node* temp = head ;
    while (temp->next != nullptr){
        if(count == 0){
            cout << temp->data << " ";
            cout << temp->next->data << "" << endl;
            temp = temp->next;
            count++;
            continue;
        }
         cout << temp->prev->data<< " ";
            cout << temp->data << " ";
            cout << temp->next->data << " " << endl;
            temp = temp->next;
    }
    cout << endl;
   }
};

int main(){
List list ;
list.push_back(1220);
list.push_back(2230);
list.push_back(210);
list.push_front(21);
list.Between(1,25);
list.delete_front();
list.delete_back();
list.print() ;
}
