#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int numNodes;
    cout << "Enter number of nodes: ";
    cin >> numNodes;

    if (numNodes == 0) return 0;

    Node* head = NULL;
    Node* tail = NULL;

    cout << "Enter nodes: ";
    for (int i = 0; i < numNodes; i++) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int N;
    cout << "Enter N to split after: ";
    cin >> N;

    if (head == NULL) return 0;

    Node* temp = head;
    // Traverse to N-th node (1-based count)
    // If N=1, we stop at head. If N=2, we stop at head->next.
    // Loop N-1 times.
    for (int i = 0; i < N - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
         // N is larger than or equal to list size, so everything is in first part
         cout << "Part 1: ";
         printList(head);
         cout << "Part 2: " << endl; // Empty
    } else {
        Node* secondHead = temp->next;
        temp->next = NULL; // Break the link

        cout << "Part 1: ";
        printList(head);

        cout << "Part 2: ";
        printList(secondHead);
    }

    return 0;
}
