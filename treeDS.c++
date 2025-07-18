#include <iostream>
#include <queue>
using namespace std;

int id = -1;
int minValue;
int maxValue;


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

void postorder(Node* root){
     if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inOrder(Node* root){
    if(!root) return ; 
    inOrder(root->left);
    cout << root->data << " ";
    if(root->data < minValue){
        minValue = root->data;
    }
    if(root->data > maxValue){
        maxValue = root->data;
    }
    inOrder(root->right);
}

void LevelOrder(Node* root ){
  if (root == nullptr) {
        return;
    }
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";

        if (temp->left != nullptr) {
            q.push(temp->left);
        }
        if (temp->right != nullptr) {
            q.push(temp->right);
        }
    }
}


int main() {
    int arr[] = {1, 2, -1, -1, 3, 4, -1, -1, -1};
    minValue = arr[0];
    maxValue = arr[0];
    int length = sizeof(arr) / sizeof(arr[0]);

    Node* root = insertion(arr, length);

    cout << "Preorder Traversal of Tree:\n";
    preorder(root);
     
     cout << "Postorder Traversal of Tree:\n";
    postorder(root);

     cout << "inorder Traversal of Tree:\n";
    inOrder(root);

    cout << "level order traversel of tree:\n";
    LevelOrder(root);

        cout << maxValue << "maxmimun value" << endl;
        cout << minValue << "minimun value" << endl;

    return 0;
}
