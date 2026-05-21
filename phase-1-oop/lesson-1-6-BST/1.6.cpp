#include <iostream>
#include <string>

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data)
        : data(data), left(nullptr), right(nullptr) {}
};

class BST {
    private:
        Node* root;
        Node* insert(Node* node, int value) {
            if(node == nullptr) {
                return new Node(value);
            }
            if(value < node->data) {
                node->left = insert(node->left, value);
            }
            else
                node->right = insert(node->right, value);
            
            return node;
        }
        void inOrder(Node* node) {
            if(node == nullptr) {
                return;
            }
           
            inOrder(node->left);
            std::cout << node->data << " ";
            inOrder(node->right);
        }

        void clear(Node* node) {
            if(node == nullptr) {
                return;
            }
            clear(node->left);
            clear(node->right);
            delete node;
        }
    
    public:
        BST() : root(nullptr) {}

        ~BST() {
            clear(root);
        }

        void insert(int value) {
            root = insert(root, value);
        }

        void inOrder() {
            inOrder(root);
        }
};


int main() {

    BST tree;

    tree.insert(90);
    tree.insert(12);
    tree.insert(22);
    tree.insert(33);
    tree.insert(5);
    tree.insert(67);
    tree.insert(76);
    tree.insert(1);
    tree.insert(2);
    tree.insert(23);
    tree.insert(4);

    tree.inOrder();

    return 0;
}