// #include <bits/stdc++.h>
// using namespace std;


// int id = -1 ;

// class Node {
//      int data ;
//      Node* left ;
//      Node* right ;
     
//      Node(int value){
//          data = value;
//          left = nullptr;
//          right = nullptr;
//      }
// };
     
//     //  Node* insertion(int arr[], int length){
//     //      id++ ;
//     //      if(arr[id]==-1 || id >= length){
//     //          return nullptr;
//     //      }
//     //      Node* newNode = new Node(arr[id]);
//     //      newNode->left = insertion(arr, length);
//     //      newNode->right = insertion(arr, length);
//     //      return newNode;
//     //  }
    
//     Node* insertion(int arr[], int length) {
//     id++;
//     if (id >= length || arr[id] == -1) {
//         return nullptr;
//     }
//     Node* newNode = new Node(arr[id]);
//     newNode->left = insertion(arr, length);
//     newNode->right = insertion(arr, length);
//     return newNode;
// }

     
// void preorder(Node* root) {
//     if (!root) return;
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }




// int main() {
//     int arr[] = {1,2,-1,-1,3,4,-1,-1};
//     int length = sizeof(arr)/sizeof(arr[0]);
//    Node* root = nullptr;
//    root = insertion(arr[], length);
//     preorder(root); 
//     retrun 0;

// }


#include <iostream>
using namespace std;

int id = -1;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Global function for tree construction from preorder traversal with -1 as NULL
Node* insertion(int arr[], int length) {
    id++;
    if (id >= length || arr[id] == -1) {
        return nullptr;
    }
    Node* newNode = new Node(arr[id]);
    newNode->left = insertion(arr, length);
    newNode->right = insertion(arr, length);
    return newNode;
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    int arr[] = {1, 2, -1, -1, 3, 4, -1, -1, -1};
    int length = sizeof(arr) / sizeof(arr[0]);

    Node* root = insertion(arr, length);

    cout << "Preorder Traversal of Tree:\n";
    preorder(root);

    return 0;
}
