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
void displayll(Node* head){
    if(!head) cout<<"\nEmpty LL";
    Node* nd=head;
    cout<<"\nLinked List: ";
    while(nd){
        cout<<nd->data<<" ";
        nd=nd->next;
    }
    cout<<endl;
}
Node* insertathead(Node* head, int key){
    Node* nd=new Node(key);
    if(!head){
        return nd;
    }
    nd->next=head;
    cout<<"\nElement inserted at head"<<endl;
    return nd;
}
Node* insertattail(Node* head,int key){
    Node* nd=new Node(key);
    if(!head){
        return nd;
    }
    Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=nd;
    return head;
}
Node* deleteathead(Node* head){
    if(!head){
        cout<<"\nLinked list is empty";
        return head;
    }
    Node* nd=head;
    head=head->next;
    delete nd;
    cout<<"\nFirst element deleted"<<endl;
    return head;
}
Node* deleteattail(Node* head){
    if(!head){
        cout<<"\nLinked list is empty";
        return head;
    }
    Node* nd=head;
    while(nd->next->next){
        nd=nd->next;
    }
    delete nd->next;
    nd->next=nullptr;
    cout<<"\nLast element deleted"<<endl;
    return head;
}
Node* reversell(Node* head){
    Node* prev=nullptr;
    Node* curr=head;
    Node* next;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    cout<<"\nLinked List reversed"<<endl;
    return prev;
}

int main(){
    Node* head=nullptr;
    int n,key;
    cout<<"\nEnter the length: ";
    cin>>n;
    cout<<"\nEnter the LL elements: ";
    for(int i=0;i<n;i++){
        cin>>key;
        head=insertattail(head,key);
    }
    displayll(head);
    // head=insertathead(head,0);
    // displayll(head);
    // head=reversell(head);
    // displayll(head);
    // head=deleteattail(head);
    // displayll(head);
    head=deleteathead(head);
    displayll(head);
    cout<<endl;
    return 0;
}