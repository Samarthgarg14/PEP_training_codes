#include <iostream>
#include <queue>
using namespace std;

class Tree {

private:
    struct Node {
        int data;
        Node* left;
        Node* right;

        Node(int val) {
            data = val;
            left = right = NULL;
        }
    };

    Node* root;

    Node* insert(Node* node, int val) {
        if (node == NULL)
            return new Node(val);

        if (val < node->data)
            node->left = insert(node->left, val);
        else
            node->right = insert(node->right, val);

        return node;
    }

    bool search(Node* node, int key) {
        if (node == NULL)
            return false;

        if (node->data == key)
            return true;

        if (key < node->data)
            return search(node->left, key);
        else
            return search(node->right, key);
    }

    void inorder(Node* node) {
        if (node == NULL) return;

        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    int height(Node* node) {
        if (node == NULL)
            return 0;

        return 1 + max(height(node->left), height(node->right));
    }

    Node* findMin(Node* node) {
        while (node->left != NULL)
            node = node->left;
        return node;
    }

    Node* deleteNode(Node* node, int key) {
        if (node == NULL)
            return NULL;

        if (key < node->data)
            node->left = deleteNode(node->left, key);
        else if (key > node->data)
            node->right = deleteNode(node->right, key);
        else {
            // Case 1: No child
            if (node->left == NULL && node->right == NULL) {
                delete node;
                return NULL;
            }
            // Case 2: One child
            else if (node->left == NULL) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == NULL) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            // Case 3: Two children
            else {
                Node* temp = findMin(node->right);
                node->data = temp->data;
                node->right = deleteNode(node->right, temp->data);
            }
        }
        return node;
    }

public:

    Tree() {
        root = NULL;
    }

    // ---------- Public Functions ----------

    void insert(int val) {
        root = insert(root, val);
    }

    bool search(int key) {
        return search(root, key);
    }

    void deleteValue(int key) {
        root = deleteNode(root, key);
    }

    void displayInorder() {
        inorder(root);
        cout << endl;
    }

    int getHeight() {
        return height(root);
    }

    void levelOrder() {
        if (root == NULL) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        cout << endl;
    }
};

int main() {
    Tree t;

    t.insert(50);
    t.insert(30);
    t.insert(70);
    t.insert(20);
    t.insert(40);
    t.insert(60);
    t.insert(80);

    cout << "Inorder: ";
    t.displayInorder();

    cout << "Level Order: ";
    t.levelOrder();

    cout << "Height: " << t.getHeight() << endl;

    cout << "Search 40: " << t.search(40) << endl;

    t.deleteValue(30);
    cout << "After Deletion (30): ";
    t.displayInorder();

    return 0;
}


void DFS(int start)