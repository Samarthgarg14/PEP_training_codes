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
Node* merge2LL(Node* head1,Node* head2){
    if (!head1) return head2;
    if (!head2) return head1;

    Node* head = nullptr;
    Node* temp3 = nullptr;

    if (head1->data < head2->data) {
        head = new Node(head1->data);
        head1 = head1->next;
    } else {
        head = new Node(head2->data);
        head2 = head2->next;
    }
    temp3 = head;

    while(head1 && head2){
        if(head1->data < head2->data){
            temp3->next=new Node(head1->data);
            head1=head1->next;
        }
        else{
            temp3->next=new Node(head2->data);
            head2=head2->next;
        }
        temp3=temp3->next;
    }
    while(head1){
        temp3->next=new Node(head1->data);
        temp3=temp3->next;
        head1=head1->next;
    }
    while(head2){
        temp3->next=new Node(head2->data);
        temp3=temp3->next;
        head2=head2->next;
    }
    return head;
}
int main(){
    Node* head1=nullptr;
    Node* head2=nullptr;
    Node* head=nullptr;
    int n,key;
    cout<<"\nEnter the length1: ";
    cin>>n;
    cout<<"\nEnter the LL1 elements: ";
    for(int i=0;i<n;i++){
        cin>>key;
        head1=insertattail(head1,key);
    }
    displayll(head1);

    cout<<"\nEnter the length2: ";
    cin>>n;
    cout<<"\nEnter the LL2 elements: ";
    for(int i=0;i<n;i++){
        cin>>key;
        head2=insertattail(head2,key);
    }
    displayll(head2);

    head=merge2LL(head1,head2);
    cout<<"\nAfter merging the final LL: "<<endl;
    displayll(head);
    // head=insertathead(head,0);
    // displayll(head);
    // head=reversell(head);
    // displayll(head);
    // head=deleteattail(head);
    // displayll(head);
    // head=deleteathead(head);
    // displayll(head);
    cout<<endl;
    return 0;
}