#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=nullptr;
    }
};
class LL{
    public:
    Node* head=nullptr;
    Node* tail=nullptr;
    void display(){
        if(!head){
            cout<<"\nLinked List is empty"<<endl;
        }
        else{
            cout<<"\nLinked List: ";
            Node* temp=head;
            while(temp){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
        cout<<endl;
    }
    void append(int key){
        Node* nd=new Node(key);
        if(!head){
            head=nd;
        }
        else{
            Node* temp=head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=nd;
        }
    }
    void delatpos(int pos){
        if(pos)
    }
};
int main(){
    LL* list=new LL();

    int n,k;
    cout<<"\nEnter length of linked list: ";
    cin>>n;
    cout<<"\nEnter linked list elements: ";
    for(int i=0;i<n;i++){
        cin>>k;
        list->append(k);
    }
    cout<<"\nElement(s) inserted into linked list"<<endl;
    list->display();
}