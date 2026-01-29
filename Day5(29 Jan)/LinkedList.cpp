#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next=nullptr;
    }
    Node(int d){
        this->data=d;
        this->next=nullptr;
    }
};
int main(){
    return 0;
}