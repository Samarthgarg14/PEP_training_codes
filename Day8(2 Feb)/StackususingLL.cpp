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
class stk{
    public:
    Node* head;
    int len;
    int top;
    stk(int len){
        head=nullptr;
        this->len=len;
        top=-1;
    }
    void push(int key){
        if(!isfull()){
            Node* nd=new Node(key);
            if(!head){
                head=nd;
            }
            else{
                while
            }
            cout<<"\nElement pushed into stack successfully"<<endl;
        }
        else{
            cout<<"\nStack is full"<<endl;
        }
    }
    void display(){
        if(isempty()) cout<<"\nStack is empty"<<endl;
        else{
            for(int i=top;i>=0;i--){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    int isempty(){
        if(top==-1) return 1;
        return 0;
    }
    int isfull(){
        if(top==len-1) return 1;
        return 0;
    }
    int pop(){
        if(!isempty()){
            cout<<"\nTop element poped from the stack successfully"<<endl;
            return a[top--];
        }
        else{
            cout<<"\nStack is empty"<<endl;
        }
        return -1;
    }
    int peek(){
        if(!isempty()){
            return a[top];
        }
        else{
            cout<<"\nStack is empty"<<endl;
        }
        return -1;
    }
};
void multiappend(stk* s){
    int n;
    cout<<"Enter the number of elements to be added: ";
    cin>>n;
    if(n>((s->len)-(s->top+1))) cout<<"\nStack has only "<<(s->len)-(s->top+1)<<" spaces left"<<endl;
    else{
        cout<<"\nEnter the elements to be added: ";
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            s->push(k);
    }
    cout<<endl;
    }
}
int main(){
    int n,k;
    cout<<"\nEnter size of stack: ";
    cin>>n;
    stk* s1=new stk(n);
    // s1->display();

    // multiappend(s1);
    // s1->display();
    int x;
    cout<<"\n1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.Peek"<<endl;
    cout<<"5.Isempty"<<endl;
    cout<<"6.Isfull"<<endl;
    cout<<"\nEnter choice: ";
    cin>>x;
    switch(x){
        case 1:
        cout<<"\nEnter the element to be pushed: ";
        cin>>k;
        s1->push(k);
        break;

        case 2:
        s1->pop();
        break;

        case 3: 
        s1->display();
        break;

        case 4:
        s1->peek();
        break;

        case 5:
        s1->isempty() ? cout<<"\nStack is empty"<<endl : cout<<"\nStack is not empty"<<endl;
        break;

        case 6:
        s1->isfull() ? cout<<"\nStack is full"<<endl : cout<<"\nStack is not full"<<endl;
        break;

        default:
        cout<<"\nInvalid choice";
        break;
    }
    cout<<endl;
    return 0;
}