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

        if (temp->right != nullptr) {
            q.push(temp->right);  // if left first it will go with left to right 
        } 
        if (temp->left != nullptr) {
            q.push(temp->left);
        }
        
    }
}
 void deleteNode( Node* root, int key) {
        if (!root) return;

        if (!root->left && !root->right) {
            if (root->data == key) {
                delete root;
                root = nullptr;
            }
            return;
        }

        queue<Node*> q;
        q.push(root);

        Node* keyNode = nullptr;
        Node* temp = nullptr;
        Node* parent = nullptr;

        while (!q.empty()) {
            temp = q.front();
            q.pop();

            if (temp->data == key) {
                keyNode = temp;
            }

            if (temp->left) {
                parent = temp;
                q.push(temp->left);
            }

            if (temp->right) {
                parent = temp;
                q.push(temp->right);
            }
        }

        if (keyNode) {
            keyNode->data = temp->data; 
            if (parent->right == temp) {
                delete parent->right;
                parent->right = nullptr;
            } else if (parent->left == temp) {
                delete parent->left;
                parent->left = nullptr;
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


        cout << "deletion of node:\n"; 
    return 0;
}
