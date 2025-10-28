// #include <iostream>
// using namespace std;

// class Node{
//     public: 

//     int data;
//     int prev;
//     int next;
//     int child ;
//     Node(int value){
//         data = value;
//         prev = NULL;
//         next = NULL;
//         child = NULL;
//     }
// };
// class List {
//         public : 

//         Node* head ;
//         Node* tail;

//         List(){
//             head = nullptr;
//         }
//       Node* doubly(Node* head ){
//         if(!head)
//         return head ;
//         stack<Node*> s;

//         Node* temp= head ;
        
//         while(temp!= nullptr){
//             if(temp->child){
//                 if(temp->next){
//                     s.push(temp->next);
//                 }
//                 temp->next = temp->child;
//                 temp->child->prev = temp;
//                 temp->child = nullptr;
//             }
//             if(!temp->next && s.empty()){
//                     temp->next = s.top();
//                     s.top()->prev = temp;
//                     s.pop();
//             }
//             temp = temp->next ;
//         }

//         return head ;
//       }
//     };