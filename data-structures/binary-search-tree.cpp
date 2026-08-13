#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    if (!root) return new Node(value);
    if (value < root->data) root->left = insert(root->left, value);
    else if (value > root->data) root->right = insert(root->right, value);
    return root;
}

bool search(Node* root, int value) {
    if (!root) return false;
    if (root->data == value) return true;
    return value < root->data ? search(root->left, value)
                              : search(root->right, value);
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
}

void destroy(Node* root) {
    if (!root) return;
    destroy(root->left);
    destroy(root->right);
    delete root;
}

int main() {
    Node* root = nullptr;
    for (int x : {50, 30, 70, 20, 40, 60, 80})
        root = insert(root, x);

    cout << "BST inorder: ";
    inorder(root);
    cout << "\nSearch 60: " << (search(root, 60) ? "Found" : "Not Found") << '\n';

    destroy(root);
}
