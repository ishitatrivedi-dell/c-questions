#include <iostream>
#include <queue>
using namespace std;

int id = -1;
int minValue;
int maxValue;

class Node {
public:
int data ;
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Binary Tree insertion using array with -1 as NULL
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

void deleteNode(Node* root, int data) {
    if (!root) return;

    if (!root->left && !root->right) {
        if (root->data == data) {
            delete root;
            root = nullptr;
        }
        return;
    }

    queue<Node*> q;
    q.push(root);

    Node* dataNode = nullptr;
    Node* temp = nullptr;
    Node* parent = nullptr;

    while (!q.empty()) {
        temp = q.front();
        q.pop();

        if (temp->data == data) {
            dataNode = temp;
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

    if (dataNode) {
        dataNode->data = temp->data; 
        if (parent->right == temp) {
            delete parent->right;
            parent->right = nullptr;
        } else if (parent->left == temp) {
            delete parent->left;
            parent->left = nullptr;
        }
    }
}

Node* insert(Node* root , int data){
    if(root == nullptr){
        return new Node(data);
    }
    if(data > root->data){
        root->right = insert(root->right, data);
    } else if (data < root->data){
        root->left = insert(root->left, data);    
    }
    return root;
}

Node* search(Node* root, int data){
    if(root == NULL || root->data == data){
        return root ;
    }
    if(data > root->data){
        return search(root->right , data);
    } else {
        return search(root->left , data);
    }
}
Node* getSuccessor(Node* curr){
    curr = curr->right;
    while (curr != nullptr && curr->left != nullptr)
        curr = curr->left;
    return curr;
}
Node* delNode (Node* root , int x ){
if (root == nullptr)
        return root;

        if(root-> data > x ){
            root->left == delNode(root->left, x);
        }
    else if (root->data < x){
        root->right == delNode(root->right, x);
    }
    else{

        if(root->left == nullptr){
            Node* temp = root->right;
            delete root;
            return temp;
        }
         if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* store = getSuccessor(root);
        root->data = store->data;
        root->right = delNode(root->right, store->data);
    }
    return root;
}


int main() {
    int arr[] = {1, 2, -1, -1, 3, 4, -1, -1, -1};
    int length = sizeof(arr) / sizeof(arr[0]);
    minValue = arr[0];
    maxValue = arr[0];

    Node* root = insertion(arr, length);

    cout << "Preorder Traversal of Tree:\n";
    preorder(root);
    cout << "\n";

    cout << "Postorder Traversal of Tree:\n";
    postorder(root);
    cout << "\n";

    cout << "Inorder Traversal of Tree:\n";
    // inOrder(root);
    cout << "\n";

    cout << "Level Order Traversal of Tree:\n";
    LevelOrder(root);
    cout << "\n";

    cout << maxValue << " is the maximum value" << endl;
    cout << minValue << " is the minimum value" << endl;


    (insert(root,35) != NULL )? cout << "found\n": cout << "not found\n" ; 
    (search(root, 19) != NULL)? cout << "Found\n": 
            cout << "Not Found\n";

                int x = 15;
             root = delNode(root, x);
    inOrder(root);


    
    return 0;
    return 0;

    
}

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int item) {
//         data = item;
//         left = right = NULL;
//     }
// };

// // function to search a data in a BST
// Node* search(Node* root, int data) {
  
//     // Base Cases: root is null or data 
//     // is present at root
//     if (root == NULL || root->data == data)
//         return root;

//     // data is greater than root's data
//     if (root->data < data)
//         return search(root->right, data);

//     // data is smaller than root's data
//     return search(root->left, data);
// }

// // Driver Code
// int main() {
  
//     // Creating a hard coded tree for keeping 
//     // the length of the code small. We need 
//     // to make sure that BST properties are 
//     // maintained if we try some other cases.
//     Node* root = new Node(50);
//     root->left = new Node(30);
//     root->right = new Node(70);
//     root->left->left = new Node(20);
//     root->left->right = new Node(40);
//     root->right->left = new Node(60);
//     root->right->right = new Node(80);
  
//     (search(root, 19) != NULL)? cout << "Found\n": 
//                                cout << "Not Found\n";

  
//     (search(root, 80) != NULL)? cout << "Found\n": 
//                                cout << "Not Found\n";

//     return 0;
// }